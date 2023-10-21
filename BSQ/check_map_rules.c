/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:58:20 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 12:58:34 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "check_map_rules.h"
#include "get_board_size.h"
#include "uber.h"

int	check_map_rules(char *map_file, char rules[3], t_board *board)
{
	int		fd;
	char	buffer;
	int		size;

	size = get_params_size(map_file);
	if (!size)
		return (-1);
	fd = open(map_file, O_RDONLY);
	board->size.x = get_nb_lines(fd, size);
	if (board->size.x == 0)
		return (-1);
	size = 0;
	while (read(fd, &buffer, 1) && buffer != '\n')
		rules[size++] = buffer;
	check_map_content(rules, fd, map_file, board);
	close(fd);
	if (rules[0] == rules[1] || rules[1] == rules[2] || rules[0] == rules[2]
		|| board->size.x < 1 || board->size.y < 1)
		return (-1);
	return (0);
}

void	check_map_content(char *rules, int fd, char *map_file, t_board *board)
{
	int		count;
	char	buffer;
	int		i;
	int		nb_disp;

	i = 0;
	nb_disp = 0;
	count = 0;
	board->size.y = get_nb_cols(&fd, map_file);
	uber_malloc(board);
	while (read(fd, &buffer, 1))
	{
		line_check(&count, board, &i, buffer);
		if (buffer != '\n')
		{
			if (!is_in_rules(buffer, rules) || buffer == rules[2])
				board->size.y = -1;
			board->data[i][count] = buffer;
			count++;
			if (buffer == rules[0])
				nb_disp = 42;
		}
	}
	if (nb_disp == 0)
		board->size.y = -1;
}

int	get_params_size(char *map_file)
{
	int		fd;
	char	buffer;
	int		size;

	size = 0;
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	while (read(fd, &buffer, 1) && buffer != '\n')
	{
		size++;
	}
	close(fd);
	return (size);
}

int	is_in_rules(char slot, char *rules)
{
	int	i;

	i = -1;
	while (rules[++i])
		if (slot == rules[i])
			return (1);
	return (0);
}

void	line_check(int *count, t_board *board, int *i, char buffer)
{
	if (buffer == '\n')
	{
		if (*count != board->size.y)
			board->size.y = -1;
		*count = 0;
		(*i)++;
	}
}
