/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:31:51 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/09 20:24:33 by ayoakouh         ###   ########.fr       */
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
//#include<stdio.h>
// int main()
// {
// 	char str[]= "ayoubbbb aliiiii djdj";
// 	unsigned char *p= (unsigned char *)str;
// 	printf("%s", ft_memchr(p + 4, 'a', 15));
// }

// #include<string.h>
// int main(){
// 	int arr[]={256, 256, 9};
//     int *i = memchr((unsigned char*)&arr, 1, 1);    //1
// 	printf("%d", *i);
//     // int arr[]={256, 7, 9};
//     // int *i = ft_memchr((unsigned char*)&arr + 1 , 1, 1);    //2130706433
