/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_size.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:09:37 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:11:27 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_BOARD_SIZE_H
# define GET_BOARD_SIZE_H

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

int		get_nb_lines(int fd, int size);
int		get_nb_cols(int *fd, char *map_file);

#endif
