#include <stdio.h>

int ft_strlen(char *str)
{
    int contador;

    contador = 0;
    while (str[contador] != '\0')
        contador++;
    return (contador);
}

int ft_toupper(unsigned int p, char c)
{
    if (c > 64 && c < 91)
    {
        c = c + 32;
        return (c);
    }
    return (c);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int contador;

    contador = 0;
    while(s[contador] != '\0')
    {
        s[contador] = f(contador, s[contador]);
        contador++;
    }
}

char func(unsigned int i, char c)
{
    return (c + i);
}

int main (void)
{
    char (*pfunction)(unsigned int, char);
    char *string;

    pfunction = &func;
    string = "hola";
    printf("%s", ft_strmapi(string, pfunction));

}