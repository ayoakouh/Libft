/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:32:40 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 18:22:40 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "yes";
// 	char r[3];
// 	char p[] = "siuu";
// 	printf("%s\n", ft_memcpy(r, str,3));
// }
/*#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
//int main()
{
	int i =0;
	int p[] = {5, 8, 9, 2};
	int f[20]; 
	//= malloc(5 * sizeof(int));
	ft_memcpy(f,p, 5*sizeof(int));
	while (i < 4)
	{
		printf("%d\n", f[i]);
		i++;
	}
}
// {
// 	char buffer[] = "abcdefg";
// 	ft_memcpy(NULL, buffer + 2, 0);
// 	printf("%s", buffer);
// }
// 	printf("%s\n", buffer);
// 	//printf("%s\n",memmove(buffer + 2, buffer, 5));
// }*/
