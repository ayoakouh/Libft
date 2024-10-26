/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:42:15 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 14:07:14 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int	c)
{
	char	*last_occ;
	int	i;

	i = 0;
	last_occ = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char )c)
		{
			last_occ = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
		return(NULL);
	return (last_occ);
}
