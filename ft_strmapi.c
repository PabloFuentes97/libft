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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

    int s_len;
    int contador;
    char *string_nueva;

    s_len = ft_strlen(s);
    contador = 0;
    string_nueva = (char*)malloc(sizeof(char) * s_len);
    while(s[contador] != '\0')
    {
        string_nueva[contador] = f(contador, s[contador]);
        contador++;

    }
    return (string_nueva);
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