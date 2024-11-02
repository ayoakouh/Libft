/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:33:48 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/02 13:02:10 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char	*s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*int main()
{
	char *s ="hello woooorld";
	int fd;
	fd = open("teste.txt", O_WRONLY | O_CREAT | O_RDONLY);
	if (fd == -1)
		return(1);
	ft_putendl_fd(s, fd);
}
*/
