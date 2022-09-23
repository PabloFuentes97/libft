#include <stdio.h>

void *ft_memchr(const void *string, int c, unsigned int len) //localizar primer caso de c
{
    unsigned int contador;
    unsigned char* p;
    
    contador = 0;
    p = (unsigned char*)string;
    while (contador < len)
    {
        if (p[contador] == (unsigned char)c)
            return(p + contador);
        contador++;
    }
    return (0);
}

int main()
{
    char s[] = "Buenas";
    char *ptr = ft_memchr(s,'e', 6);
    printf ("%s\n", ptr);
    return 0;
}
