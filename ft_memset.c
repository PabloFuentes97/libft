#include <stdio.h>

void *ft_memset(void *string, int c,  unsigned int len)
{
    unsigned int contador;
    unsigned char* p;
    
    contador = 0;
    p = string;
    while(contador < len)
    {
        p[contador]= (unsigned char)c;
        contador++;
    }
    return (string);
}

int main(void)
{
    int contador;

    contador = 0;
    char string[] = "hola buenas";
    while (contador < 11)
    {
        printf("%c", string[contador]);
        contador++;
    }
    ft_memset(string, 4, sizeof(string));
    while (contador < 11)
    {
        printf("%c", string[contador]);
        contador++;
    }
}

