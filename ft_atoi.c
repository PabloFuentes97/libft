int	calcular_signo(char *str) 
{
	int		signo;
	int		c;

	signo = 1;
	c = 0;
	while (str[c] < 48 || str[c] > 57)
	{
		if (str[c] == 32 || (str[c] > 8 && str[c] < 14) || str[c] == '+')
		{
			c++;
			continue ;
		}	
		else if (str[c] == '-')
			signo = signo * -1;
		c++;
	}
	return (signo);
}

int	calcular_posicion(char *str)
{
	int		signo;
	int		c;

	signo = 1;
	c = 0;
	while (str[c] < 48 || str[c] > 57)
	{
		if (str[c] == 32 || (str[c] > 8 && str[c] < 14) || str[c] == '+')
		{
			c++;
			continue ;
		}	
		else if (str[c] == '-')
			signo = signo * -1;
		c++;
	}
	return (c);
}

int	ft_atoi(char *str) 
{
	int		resultado;
	int		signo;
	int		c;

	resultado = 0;
	signo = calcular_signo(str);
	c = calcular_posicion(str);
	while (str[c] != '\0')
	{
		if (str[c] > 47 && str[c] < 58)
			resultado = resultado * 10 + (str[c] - '0');
		else
			break ;
		c++;
	}
	return (signo * resultado);
}	