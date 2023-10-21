/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:48:12 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/23 09:09:11 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 0;
	if (argc)
	{
		while (argv[0][i])
		{
			c = argv[0][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
