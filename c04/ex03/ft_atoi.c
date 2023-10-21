/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 07:38:02 by xxxxxxx           #+#    #+#             */
/*   Updated: 2021/11/16 09:41:28 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_space(char *str, int *i);

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	check_space(str, &i);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	check_space(char *str, int *i)
{
	while (str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\f'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
	{
		(*i)++;
	}
}
