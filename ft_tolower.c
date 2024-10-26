/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:20:48 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 08:18:06 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int	c)
{
	if (c <= 'A' && c >= 'Z')
		return (c + 32);
	else
		return(c);
}
int main()
{
	int c = 'B';
	printf("%c",ft_tolower(c));
}
