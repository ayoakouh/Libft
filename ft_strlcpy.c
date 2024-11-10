/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:29:46 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 16:11:44 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t	len)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	i = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (len == 0)
		return (len_src);
	while (src[i] && (i < len - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
