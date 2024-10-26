/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:49:46 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/26 08:25:39 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t ft_strlen(const char *str);
char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	start;
	size_t	end;
	char *ptr;
	size_t	i;
	size_t	j;

	start = 0;
	j = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] == set[j])
		start++;
	while (s1[end] == set[end])
		end--;
	ptr = (char *) malloc (end - start + 1);
	if (ptr == NULL)
		return (NULL);
	while (start <= end)
	{
		ptr[i++] = s1[start];
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
#include <stdio.h>
int main()
{
	char str[] = "   ayoub ali     ";
	char set[] = " a";
	printf("%s", ft_strtrim(str,set));
}
