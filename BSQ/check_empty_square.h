/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_square.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:11:45 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:04:24 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_EMPTY_SQUARE_H
# define CHECK_EMPTY_SQUARE_H

# ifndef T_POINT
#  define T_POINT

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;
# endif

# ifndef T_BOARD
#  define T_BOARD

typedef struct s_board
{
	char	**data;
	t_point	size;
}	t_board;

# endif

int	is_square_empty(t_board *board, t_point *nw, int size, char *rules);

#endif
