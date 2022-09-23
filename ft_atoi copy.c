#include <stdio.h>

int	ft_atoi(char *str) 
{
	int		resultado;
	int		signo;
	int		c;

	resultado = 0;
	signo = 1;
	c = 0;
	while (str[c] != '\0')
	{
		while (str[c] < 48 || str[c] > 57)
		{
			if (str[c] == 32 || (str[c] > 8 && str[c] < 14) || str[c] == '+')
				c++;
			if (str[c] == '-')
			{
				signo = signo * -1;
				c++;
			}
		}
		while (str[c] > 47 && str[c] < 58)
		{
			resultado = resultado * 10 + (str[c] - '0');
			c++;
		}
		break;
	}
	return (signo * resultado);
}

int main (void)
{
	char *str;

	str = "  -++-123-45+";
	printf("%d", ft_atoi(str));
}