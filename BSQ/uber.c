/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uber.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:02:11 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:07:37 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "uber.h"

void	uber_malloc(t_board *board)
{
	int	i;

	i = -1;
	board->data = malloc(sizeof(char *) * board->size.x);
	while (++i < board->size.x)
	{
		board->data[i] = malloc(sizeof(char) * board->size.y);
	}
}

void	uber_free(t_board *board)
{
	int	i;

	i = -1;
	while (++i < board->size.x)
	{
		free(board->data[i]);
	}
	free(board->data);
}
