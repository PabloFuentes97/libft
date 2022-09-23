#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int		contador;
    contador = 0;

	while (str[contador] != '\0')
	{
		if (str[contador] == c)
			return (&str[contador]);
        contador++;
	}
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
    printf("%s", ft_strchr(string, c));
}