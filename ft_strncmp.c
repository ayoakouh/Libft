/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:20:34 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/23 10:27:25 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_strncmp (const char	*s1, const char	*s2, size_t	n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}
int main() {
    int result1 = ft_strncmp("apple", "apricot", 3);
    int result2 = ft_strncmp("apple", "apricot", 5);
    int result3 = ft_strncmp("banana", "band", 3);

    printf("Result of strncmp(\"apple\", \"apricot\", 3): %d\n", result1);
    printf("Result of strncmp(\"apple\", \"apricot\", 5): %d\n", result2);
    printf("Result of strncmp(\"banana\", \"band\", 3): %d\n", result3);

    return 0;
}
