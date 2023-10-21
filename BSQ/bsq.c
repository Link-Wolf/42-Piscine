/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:58:15 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:32:21 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "check_map_rules.h"
#include "find_big_square.h"
#include "uber.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	rules[3];
	t_board	board;
	int		i;

	board.size.x = 0;
	board.size.y = 0;
	if (argc < 2)
	{
		from_stdin(rules, &board);
	}
	i = 0;
	while (argv[++i])
	{
		from_file(rules, &board, argv[i]);
	}
	uber_free(&board);
}

void	from_stdin(char rules[3], t_board *board)
{
	char	buffer;
	int		fd;

	fd = open("temp", O_RDWR | O_TRUNC);
	while (read(0, &buffer, 1) && buffer != 13)
	{
		write(fd, &buffer, 1);
	}
	close(fd);
	if (check_map_rules("temp", rules, board) < 0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	else
	{
		fd = open("temp", O_RDONLY);
		close(fd);
		find_biggest_square(board, rules);
	}
}

void	from_file(char rules[3], t_board *board, char *map_file)
{
	int		fd;

	if (check_map_rules(map_file, rules, board) < 0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	else
	{
		fd = open(map_file, O_RDONLY);
		close(fd);
		find_biggest_square(board, rules);
	}
}
