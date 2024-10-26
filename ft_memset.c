/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:27 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 18:45:25 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int	c, size_t	n)
{
	unsigned char *ptr;
	size_t i;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = (char )c;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "ayoub";
	int c = 'A';
	size_t n = 5;
	printf("%s",ft_memset(str,c,n));
}
