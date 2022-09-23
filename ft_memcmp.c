#include <stdio.h>

int ft_memcmp(void *string1, void *string2, unsigned int len)
{
    unsigned int contador;
    unsigned char* p1;
    unsigned char* p2;
    
    contador = 0;
    p1 = string1;
    p2 = string2;
    while (contador < len)
    {
        if (p1[contador] == p2[contador])
        {
            contador++;
        }
        else if (p1[contador] != p2[contador])
            return (p1[contador] - p2[contador]);
    }
    return (0);
}

int main(void)
{
    char string1[] = "hola buenas";
    char string2[] = "hola Buenas";
    printf("%d", ft_memcmp(string1, string2, 6));
}