void ft_bzero(void *string, size_t n)
{
    char *c = string;
    size_t contador;
    
    contador = 0;
    while (contador < n)
    {
        c[contador] = '\0';
        contador++;
    }
}