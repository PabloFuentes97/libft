unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) // está mal, corregir
{
	unsigned int	contador;

	while (src[contador] != '\0' && contador < size - 1)
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	return (ft_strlen(src));
}