/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:27:26 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/29 10:44:42 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*int main()
{
	
	int fd = open("test.txt",O_WRONLY | O_CREAT | O_RDONLY, 0700);
	if (fd == -1)
	{
		perror("cant open file");
		return 1;
	}
	ft_putchar_fd('t', fd);

}*/
