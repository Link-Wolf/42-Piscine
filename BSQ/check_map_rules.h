/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_rules.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:43:25 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 10:57:53 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MAP_RULES_H
# define CHECK_MAP_RULES_H

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

int		check_map_rules(char *map_file, char rules[3], t_board *board);
int		get_params_size(char *map_file);
int		is_in_rules(char slot, char *rules);
void	line_check(int *count, t_board *board, int *i, char buffer);
void	check_map_content(char *rules, int fd, char *map_file, t_board *board);

#endif
