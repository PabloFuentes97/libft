#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len) //s: La string desde la que crear la substring. 
//start: El índice del caracter en ’s’ desde el que empezar la substring.
//len: La longitud máxima de la substring.
{
    unsigned long int contador;
    char *substring;

    contador = 0;
    substring = (char*)malloc(sizeof(char) * len);
    while (contador < len)
    {
        substring[contador] = s[start];
        contador++;
        start++;
    }
    substring[contador] = '\0';
    return (substring);
}

int main(void)
{
    int contador;
    char *string;
    char *substring;

    string = "muy buenas";
    substring = ft_substr(string, 4, 3);
    contador = 0;
    while (substring[contador] != '\0')
    {
        printf("%c", substring[contador]);
        contador++;
    }
}