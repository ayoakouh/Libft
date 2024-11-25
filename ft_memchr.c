/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:31:51 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/18 02:12:54 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		uc;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
