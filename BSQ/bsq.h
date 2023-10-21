/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:12:48 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:29:26 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

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
	char		**data;
	t_point		size;
}	t_board;

# endif

void	from_stdin(char rules[3], t_board *board);
void	from_file(char rules[3], t_board *board, char *map_file);

#endif
