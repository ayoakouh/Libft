/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:46:36 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/17 17:42:20 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int long c)
{
	int	count;

	count = 0;
	if (c < 0)
	{
		c *= (-1);
		count++;
	}
	if (c == 0)
	{
		count++;
	}
	while (c > 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

static char	*sizem(int i)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	return (ptr);
}

static char	*handle_zero(char *ptr)
{
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int long	nb;
	int			i;

	nb = n;
	i = ft_len(n);
	ptr = sizem(i);
	if (!ptr)
		return (NULL);
	i -= 1;
	if (nb == 0)
		return (handle_zero(ptr));
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ptr[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (ptr);
}
