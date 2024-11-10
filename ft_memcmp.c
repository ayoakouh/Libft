/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:22:42 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 18:23:36 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
// #include<string.h>
// int main()
// {
// 	int s1= 260;
// 	int s2= 290;
// 	printf("%d", ft_memcmp((unsigned char *)&s1,(unsigned char *)&s2, 10)); 
// }
// int main()
// {
// 	int s1= 260;
// 	int s2= 290;
// 	printf("%d", ft_memcmp(NULL, NULL, 0)); 
// }

