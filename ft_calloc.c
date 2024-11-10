/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:49:11 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 16:29:55 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			total_size;
	void			*ptr;
	unsigned char	*poi;

	i = 0;
	total_size = count * size;
	if (count && size && total_size / count != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	poi = (unsigned char *)ptr;
	while (i < total_size)
	{
		poi[i] = 0;
		i++;
	}
	return (ptr);
}
