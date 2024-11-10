/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:37:40 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 11:28:22 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if(!d && !s)
	return(NULL);
	if (d > s)
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// 	int i = 0;
// 	int f[] = {4,5,8,9};
// 	ft_memmove(f + 4, f, 5*sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%d", f[i]);
// 		i++;
// 	}
// }
// #include <stdio.h>
// int main()
// {
// 	char r[] = "ayoubbbbbbbbb";
// 	ft_memmove(r + 5, " - ", 3);
// 	ft_memmove(r + 8, "Akouhar",5); 
// 	printf("%s", r);
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[15] = "helloworld";
// 	//printf("%s\n", ft_memmove(dest + 4, dest, 6));
// 	printf("%s\n",memmove(dest + 4, dest ,6)); 
// }

// int main()
// {
// 	char src[] = "Hello, World, my 1337 school is gooood";
// 	printf("%s\n", memmove(src + 3, src, 7));
// 	printf("%s\n", ft_memmove(src + 3, src, 7));
// }