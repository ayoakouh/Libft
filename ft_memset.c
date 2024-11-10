/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:27 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 18:38:10 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = (char )c;
		i++;
	}
	return (str);
}

// int main()
// {
// 	int a;
// 	//a
// 	//
// 	//00000000 00000000 00000001 11110100
// 	//11111111 11111111 11111110 00001011
// 	//11111111 11111111 11111110 00001100
// 	//ft_memset(&a, 255, 4);
// 	ft_memset(&a, 97, 1);
// 	printf("%d\n", a);
	
// }
// int main()
// {
// 	char str[] = "ayoub";
// 	ft_memset(str, 'x', 2);
// 	ft_memset(str+ 3, 'a', 2);
// 	printf("%s", str);
// }
// int main()
// {
// 	int i = 4;
// 	unsigned char *p = (unsigned char *)&i;
// 	ft_memset(p, 199,1);
// 	ft_memset(p+1, 250, 1);
// 	ft_memset(p+2, 255, 1);
// 	ft_memset(p+3, 255, 1);
// 	printf("%d", i);	
// }
//00000101       00111001
//11111010       11000111

//this nigative number;
// int main()
// {
// int s = 5;
// unsigned char *a=(unsigned char *)&s;
// ft_memset(a, 12, 1);
// ft_memset (a+1 , 254, 1);
// ft_memset (a+2 , 255, 1);
// ft_memset (a+3, 255, 1);
// printf("%d", s);
// }
//00000101           00111001
