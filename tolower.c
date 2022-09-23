int ft_tolower(int c)
{
    if (c > 96 && c < 123)
    {
        c = c - 32;
        return (c);    
    }
        return (c);
}