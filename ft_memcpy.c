#include <stdio.h>

void *ft_memcpy(void *dest, void *src, int n)
{
    char *char_dest;
    const char *char_src;
    int contador;

    char_dest = (char*)dest;
    char_src = (char*)src;
    contador = 0;
    if (dest == NULL)
        return NULL;
    while (contador < n)
    {
        char_dest[contador] = char_src[contador];
        contador++;
    }
    return (dest);

}

int main(void)
{
    int contador;
    char string1[] = "hola buenas";
    char string2[] = "hola Buenas";

    contador = 0;
    ft_memcpy(string1, string2, 6);
    while (string1[contador] != '\0')
    {
        printf("%c", string1[contador]);
        contador++;
    }
}