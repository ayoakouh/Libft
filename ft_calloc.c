/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:49:11 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/24 16:11:51 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t	count, size_t	size)
{
	size_t	i;
	size_t	total_len;
	void	*ptr;

	i = 0;
	total_size = count * size;
	ptr = maloc(total_size);
	if (ptr == '\0')
		return (NULL);
	unsigned char *p = (unsigned char *)ptr;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
