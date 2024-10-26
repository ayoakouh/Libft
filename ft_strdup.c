/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:44:38 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/24 10:12:13 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strdup(const char	*s)
{
	char *ptr;
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr  =(char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s);
	return (ptr);
}
