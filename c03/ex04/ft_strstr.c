/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:36:25 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/19 10:51:47 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i_bis;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{	
		i_bis = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + i_bis]
				&& to_find[i_bis]
				&& str[i + i_bis] == to_find[i_bis])
				i_bis++;
			if (!to_find[i_bis])
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
