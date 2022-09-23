void* ft_memmove(void *dest, const void *src, size_t len)
{
    char *char_dest;
    const char *char_src;
    int contador;

    char_dest = (char*)dest;
    char_src = (char*)src;
    contador = 0;
    if (dest == NULL)
        return NULL;
    while (contador < n)
    {
        char_dest[contador] = char_src[contador];
        contador++;
    }
    return (dest);
}

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *pd = dest;
    const unsigned char *ps = src;
    if (__np_anyptrlt(ps, pd))
        for (pd += n, ps += n; n--;)
            *--pd = *--ps;
    else
        while(n--)
            *pd++ = *ps++;
    return dest;
}
