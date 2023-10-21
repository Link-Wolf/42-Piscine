/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:18:55 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/28 10:18:58 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 			1
# define FALSE 			0
# define SUCCESS 		1
# define EVEN_MSG 		"I have an even number of arguments.\n"
# define ODD_MSG 		"I have an odd number of arguments.\n"

# define EVEN(x)		(((x) % 2) == (0))

typedef int	t_bool;

void	ft_putstr(char *str);
int		main(int argc, char **argv);
t_bool	ft_is_even(int nbr);

#endif
