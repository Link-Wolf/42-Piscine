/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:44:24 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/14 09:49:14 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	test;
	int		i;

	i = 0;
	while (str[i])
	{
		test = str[i];
		if (test < '0' || test > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}