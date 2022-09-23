#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int contador;

    contador = 0;
    while (str[contador] != '\0')
        contador++;
    return (contador);
}

char *ft_strdup(const char *s1)
{
    int contador;
    int num_elementos;
    char *copia;

    contador = 0;
    num_elementos = ft_strlen(s1);
    copia = (char*)malloc(sizeof(s1));
    while (contador < num_elementos)
    {
        copia[contador] = s1[contador];
        contador++;
    }
    copia[contador] = '\0';
    return (copia);
}

int main(void)
{
    char *string;
    char *copia;
    int contador;

    string = "holas";
    copia = ft_strdup(string);
    contador = 0;
    while (contador < 5)
    {
        printf("%c", copia[contador]);
        contador++;
    }
}