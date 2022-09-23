void *ft_calloc(size_t count, size_t size) //numero de elementos, numero de bytes 
{
    int     contador;
    void    *array;
    
    array = malloc(size);
    contador = 0;

    while (contador < count)
    {
        array[contador] = 0;
        contador++;
    }
    return (array);
}

ft_memset(array, 0, sizeof(int) * count); //otra manera, coge el array, y lo rellena de ceros byte a byte