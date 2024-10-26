/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:37:40 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/25 15:12:18 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *s;
	char *d;
	size_t i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!(s < d) || (s + len > d))
	{
		while (len > 0)
		{
			d[len] = s[len] ;
			len--;
		}
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (d);

}
#include <stdio.h>
#include <string.h>
/*int main()
{
	char dest[15] = "hello, world!";
	printf("%s\n", ft_memmove(dest + 7, dest, 6));
	printf("%s\n",memmove(dest + 7, dest ,6)); 
}*/

int main()
{
	char src[] = "Hello, World, my 1337 school is gooood";
	printf("%s\n", memmove(src + 3, src, 7));
	printf("%s\n", ft_memmove(src + 3, src, 7));
}
