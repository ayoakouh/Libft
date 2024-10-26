/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:15:54 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/24 15:10:54 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i = 0;
	size_t	j = 0;
	if (haystack[i] == '\0')
	{
		return (NULL);
	}
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && needle[j] == haystack[i + j] && i < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char	*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
