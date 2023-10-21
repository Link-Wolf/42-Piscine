/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:41:59 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 11:28:18 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "check_empty_square.h"

int	is_square_empty(t_board *board, t_point *nw, int size, char *rules)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j <= size)
		{
			if (board->data[nw->x + i][nw->y + j] != rules[0])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
