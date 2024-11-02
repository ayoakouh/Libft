/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:49:11 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/02 11:11:40 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			total_len;
	void			*ptr;
	unsigned char	*poi;

	i = 0;
	total_len = count * size;
	ptr = malloc(total_len);
	if (ptr == NULL)
		return (NULL);
	poi = (unsigned char *)ptr;
	while (i < total_len)
	{
		poi[i] = 0;
		i++;
	}
	return (ptr);
}
