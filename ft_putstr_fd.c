#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int ft_strlen(char *str)
{
    int contador;

    contador = 0;
    while (str[contador] != '\0')
        contador++; 
    return (contador);
}

void ft_putstr_fd(char *s, int fd)
{
    int len;
    int contador;

    len = ft_strlen(s);
    contador = 0;

    while (contador < len)
    {
        write(fd, &s[contador], 1);
        contador++;
    }
}

int main (void)
{
    int fd;
    char *array;
    
    array = "hola";
    fd = open("file.txt", O_CREAT | O_WRONLY, 0600);
    ft_putstr_fd(array, fd);
}