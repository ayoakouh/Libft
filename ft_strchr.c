/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:17:08 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/18 02:03:31 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	m;

	i = 0;
	m = c;
	while (s[i] != '\0')
	{
		if (s[i] == m)
			return ((char *)&s[i]);
		i++;
	}
	if (m == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
