/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:10:23 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/09 20:01:05 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (n--)
	{
		p[i] = 0;
		i++;
	}
}
//int main()
//{
//	char str[] = "ayoub";
//	size_t n = 2;
//	size_t i = 0;
//	ft_bzero(str, n); 
//	while (i < 5)
//	{
//		printf("%c",str[i]);
//		i++;
//	}
//}
