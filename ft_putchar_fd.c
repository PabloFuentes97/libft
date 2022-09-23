#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main (void)
{
    int fd;
    char c;

    c = 'B';
    fd = open("file.txt", O_CREAT | O_WRONLY, 0600);
    ft_putchar_fd(c, fd);
}
