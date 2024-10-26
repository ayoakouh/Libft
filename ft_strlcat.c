/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:19:33 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 10:44:54 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const	*s)
{
	unsigned int i;

	 i = 0;
	 while (s[i])
		 i++;
	 return(i);
}

size_t	strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	lensrc;
	size_t	lendest;
	size_t i;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size == 0 || size <= lendest)
		return(lensrc + lendest);
	while (i < size - lendest - 1 && src[i] != '\0')
	{
		dest[lendest + i] = src[i]; 
			i++;
	}
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}
}
