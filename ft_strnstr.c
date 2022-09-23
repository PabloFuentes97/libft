#include <stdio.h>

char	*ft_strnstr(char *str, char *to_find, size_t len) //pasarlo a strnstr
{
	unsigned long int		contador1;
	unsigned long int		contador2;

	if (to_find[0] == '\0')
		return (str);
	contador1 = 0;
	while (contador1 < len)
	{
		contador2 = 0;
		if (str[contador1 + contador2] == to_find[contador2])
		{
			while ((str[contador1 + contador2] == to_find[contador2]) && (contador1 + contador2) < len)
			{
				contador2++;
				if (to_find[contador2] == '\0')
					return (&str[contador1]);
			}
		}
	contador1++;
	}
	return (0);
}

int main (void)
{
	char *string;
	char *to_find;

	string = "hola";
	to_find = "ol";
	printf("%s", ft_strnstr(string, to_find, 3));



}

