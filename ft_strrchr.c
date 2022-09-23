#include <stdio.h>

char	*ft_strrchr(char *str, int c) //busca caracter en un string
{
	int		contador;
    int     posicion_caracter;

    contador = 0;
    posicion_caracter = 0;

	while (str[contador] != '\0')
	{
		if (str[contador] == c)
			posicion_caracter = contador;
        contador++;
	}
    if (posicion_caracter != 0)
        return (&str[posicion_caracter]);
    if (c == '\0')
        return (&str[contador]);

	return (0);
}

int main(void)
{
    char *string;
    int c;

    string = "halas";
    c = 97;
    printf("%s", ft_strrchr(string, c));
}
