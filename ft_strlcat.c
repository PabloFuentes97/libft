unsigned int	ft_strlcat(char *dest, char *src, unsigned int size) // quizá esté mal
{
	unsigned int	c;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	c = 0;
	while ((c < (size - dest_len - 1)) && (src[c] != '\0'))
	{
		dest[c + dest_len] = src[c];
		c++;
	}
	dest[c + dest_len] = '\0';
	if (size < dest_len)
		return (src_len + size);
	return (dest_len + src_len);
}