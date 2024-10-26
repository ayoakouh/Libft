/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:29:46 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 08:48:01 by ayoakouh         ###   ########.fr       */
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
#include <stdio.h>
int main()
{
	size_t len = 6;
	char dest[] = "dkdd";
	char src[] = "ayof";
	printf("%zu",ft_strlcpy(dest,src,len));
	printf("%s\n", dest);
}


