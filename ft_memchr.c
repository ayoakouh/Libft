/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:31:51 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/24 08:43:51 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	size_t	i;

	unsigned const char *ptr = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (char )c)
			return ((char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
