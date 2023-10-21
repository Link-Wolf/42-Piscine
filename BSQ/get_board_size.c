/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:09:18 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 12:57:19 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "get_board_size.h"

int	get_nb_cols(int *fd, char *map_file)
{
	char	buffer;
	int		res;

	res = 0;
	while (read(*fd, &buffer, 1) && buffer != '\n')
		res++;
	close(*fd);
	*fd = open(map_file, O_RDONLY);
	while (read(*fd, &buffer, 1) && buffer != '\n')
		;
	return (res);
}

int	get_nb_lines(int fd, int size)
{
	char	buffer;
	int		nb_lines;
	int		i;

	nb_lines = 0;
	i = 0;
	while (i < size - 3)
	{
		read(fd, &buffer, 1);
		if (buffer >= '0' && buffer <= '9')
		{
			nb_lines *= 10;
			nb_lines += buffer - '0';
		}
		else
			return (0);
		i++;
	}
	return (nb_lines);
}
