int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (contador < n && (s1[contador] != '\0' || s2[contador] != '\0'))
	{
		if (s1[contador] == s2[contador])
		{
			contador++;
		}
		else if (s1[contador] > s2[contador])
			return (1);
		else if (s1[contador] < s2[contador])
			return (-1);
	}
	return (0);
}