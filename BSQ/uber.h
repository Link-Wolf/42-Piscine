/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uber.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:02:13 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:07:51 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UBER_H
# define UBER_H

# include <stdlib.h>

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

void	uber_malloc(t_board *board);
void	uber_free(t_board *board);

#endif
