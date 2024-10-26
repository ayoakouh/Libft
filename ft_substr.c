/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:44:49 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/25 19:58:51 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>



char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	i;

	 i = 0;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
#include <stdio.h>
int main()
{
	char str[] = "welcom to 42 school";
	int start = 7;
	size_t len = 5;
	printf("%s", ft_substr(str, start, len));
}
