int ft_isascii(int c)
{
    if (c > 0 && c < 256) //127
        return (1);
    else
        return (0);
}