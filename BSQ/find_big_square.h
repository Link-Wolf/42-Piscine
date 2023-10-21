/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big_square.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:43:48 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:25:42 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_BIG_SQUARE_H
# define FIND_BIG_SQUARE_H

# include <stdio.h>
# include <unistd.h>

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

# ifndef T_DICHO
#  define T_DICHO

typedef struct s_dicho
{
	int	max;
	int	min;
	int	ptr;
}	t_dicho;

# endif

# ifndef T_BPS
#  define T_BPS

typedef struct s_bps
{
	t_point	corner;
	int		size;
}	t_bps;

# endif

# ifndef T_BWR
#  define T_BWR

typedef struct s_board_with_rules
{
	t_board	board;
	char	*rules;
}	t_board_with_rules;

# endif

void	find_biggest_square(t_board *board, char *rules);
int		ft_min(int a, int b);
void	victory(t_point *nw, t_board *board, int size, char *rules);
int		test_size(t_point *nw, t_board *board, int size, char *rules);
void	dichotomy(t_dicho *dicho, t_bps *bps, t_point *nw,
			t_board_with_rules *bwr);

#endif
