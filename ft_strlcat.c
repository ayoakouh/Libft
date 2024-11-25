/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:15:39 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/17 17:30:22 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (lensrc);
	lendest = ft_strlen(dest);
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	i = lendest;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lensrc + lendest);
}
