/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:43:46 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 11:29:16 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_big_square.h"
#include "get_corners.h"
#include "check_empty_square.h"

void	find_biggest_square(t_board *board, char *rules)
{
	t_point				nw;
	t_bps				bps;
	t_dicho				dicho;
	t_board_with_rules	bwr;

	nw.x = 0;
	nw.y = 0;
	bwr.rules = rules;
	bwr.board = *board;
	dicho.ptr = ft_min(board->size.x, board->size.y);
	if (test_size(&nw, board, dicho.ptr, rules))
		victory(&nw, board, dicho.ptr, rules);
	else
	{
		dicho.max = dicho.ptr;
		dicho.min = -1;
		dicho.ptr = (dicho.max + dicho.min) / 2;
		while (dicho.min + 1 != dicho.max && dicho.min != dicho.max)
		{
			dichotomy(&dicho, &bps, &nw, &bwr);
		}
		victory(&(bps.corner), board, bps.size, rules);
	}
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

void	victory(t_point *nw, t_board *board, int size, char *rules)
{
	int	i;
	int	j;

	i = 0;
	while (i < board->size.x)
	{
		j = 0;
		while (j < board->size.y)
		{
			if (i >= nw->x && i <= nw->x + size && j >= nw->y
				&& j <= nw->y + size)
				write(1, &rules[2], 1);
			else
				write(1, &board->data[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	test_size(t_point *nw, t_board *board, int size, char *rules)
{
	t_point	index;

	index.x = -1;
	while (++index.x < board->size.x - size)
	{
		index.y = -1;
		while (++index.y < board->size.y - size)
		{
			nw->x = index.x;
			nw->y = index.y;
			if (is_square_empty(board, nw, size, rules))
				return (1);
		}
	}
	return (0);
}

void	dichotomy(t_dicho *dicho, t_bps *bps, t_point *nw,
	t_board_with_rules *bwr)
{
	if (test_size(nw, &(bwr->board), dicho->ptr, bwr->rules))
	{
		dicho->min = dicho->ptr;
		bps->size = dicho->ptr;
		bps->corner = *nw;
	}
	else
	{
		dicho->max = dicho->ptr;
	}
	dicho->ptr = (dicho->max + dicho->min) / 2;
}
