/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:15:00 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/29 10:45:47 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int main()
{
	int fd;
	char *s = "hello world";
	fd = open("test.txt", O_WRONLY | O_CREAT | O_RDONLY );
	if (fd== -1)
		return 1;
	ft_putstr_fd(s, fd);
}*/
