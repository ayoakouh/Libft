/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:36:34 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/17 18:01:34 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_whitespace_and_sing(const char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;
	long long	check;

	i = 0;
	res = 0;
	check = 0;
	sign = 1;
	i = skip_whitespace_and_sing(str, &sign);
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + (str[i] - '0');
		if (res / 10 != check)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		check = res;
		i++;
	}
	return ((int)(res * sign));
}
