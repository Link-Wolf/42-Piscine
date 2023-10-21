/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:55 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/14 16:51:39 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_upper(char *str, int i);
int		is_lower(char *str, int i);
int		is_begin(char *str, int i);
int		is_alpha_num(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_lower(str, i) && is_begin(str, i))
			str[i] += 'A' - 'a';
		else if (is_upper(str, i) && !is_begin(str, i))
			str[i] -= 'A' - 'a';
		i++;
	}
	return (str);
}

int	is_upper(char *str, int i)
{
	return (str[i] >= 'A' && str[i] <= 'Z');
}

int	is_lower(char *str, int i)
{
	return (str[i] >= 'a' && str[i] <= 'z');
}

int	is_begin(char *str, int i)
{
	if (i == 0)
		return (1);
	else
		return (!is_alpha_num(str, i - 1));
}

int	is_alpha_num(char *str, int i)
{
	return ((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= '0' && str[i] <= '9'));
}
