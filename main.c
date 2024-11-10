#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void ft_putchar (char c, int fd)   //   644
{
    write (fd, &c, 1);
}

int main()
{
    int fd = open ("tdt.txt", O_WRONLY | O_CREAT , 0644);
        if(fd == -1)
        {
            write (2, "eroor", 5);
            return 1;
        }
         ft_putchar( 'c', fd);
         close(fd);
}