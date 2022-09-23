#include <stdlib.h>
#include <stdio.h>

int calcular_numero_filas(char const *s, char c) //calcula numero de filas
{
    int contador_filas;
    int contador;

    contador_filas = 0;
    contador = 0;
    while (s[contador] != '\0')
    {
        if (s[contador] == c)
            contador_filas++,
        contador++;
    }
    return(contador_filas);
}

int calcular_numero_columnas(char const *s, char c, int posicion) //calcula numero de columnas por cada fila
{
    int contador;
    int contador_columnas;
    int numero_maximo;

    contador = 0;
    contador_columnas = 0;
    while (s[posicion] != '\0')
    {
        while (s[posicion] != c)
            contador++;
    }
    return (contador);
}

char **inicializar_matriz2d(char const *s, char c) // inicializa la matriz 2d, primero filas y luego columnas
{
    int posicion;
    int numero_filas;
    int numero_columnas;
    int contador_filas;
    int contador_columnas;
    char **matriz_2d;
    
    numero_filas = calcular_numero_filas(s, c);
    contador_filas = 0;
    contador_columnas = 0;
    posicion = 0;

    matriz_2d = (char**)malloc(sizeof(char*) * numero_filas); //asigna memoria a la matriz 2d, número de filas totales
    while (contador_filas < numero_filas)
    {
        while (s[posicion] != c)
        {
            contador_columnas++;
            posicion++;
        }
        matriz_2d[contador_filas] = (char *)malloc(sizeof(char) * contador_columnas); // asigna memoria columna por columna, cuántos elementos hay por fila
        contador_filas++;
        posicion++;
        contador_columnas = 0;
    }
    return(matriz_2d);
}

char **ft_split(char const *s, char c) //rellena la matriz inicializada, formada en la función anterior
{
    int posicion;
    int contador_filas;
    int contador_columnas;
    int numero_filas;
    int numero_columnas;
    char **matriz_2d;

    posicion = 0;
    contador_filas = 0;
    contador_columnas = 0;
    numero_filas = calcular_numero_filas(s, c);
    matriz_2d = inicializar_matriz2d(s , c);
    while (contador_filas < numero_filas) //rellenar la matriz 2d
    {
        while (contador_columnas < numero_columnas)
        {
            while(s[posicion] != c)
            {
                matriz_2d[contador_filas][contador_columnas] = s[posicion]; //asigna a cada elemento un valor
                contador_columnas++;
                posicion++;
            }
            posicion++;
            contador_columnas = 0;
        }
        contador_filas++;
    }
    return (matriz_2d);
}

int main(void)
{
    char **matriz_2d;
    char *array;
    char del;
    int contador_filas;
    int contador_columnas;
    int numero_filas;
    int numero_columnas;
    int posicion;

    array = "Hola, que tal, adios";
    del = ',';
    matriz_2d = ft_split(array, del);
    contador_filas = 0;
    contador_columnas = 0;
    posicion = 0;
    numero_filas = calcular_numero_filas(array, del);
    while (contador_filas < numero_filas) //rellenar la matriz 2d
    {
        while (contador_columnas < numero_columnas)
        {
            while(array[posicion] != del)
            {
                printf("%d", matriz_2d[contador_filas][contador_columnas]); //asigna a cada elemento un valor
                contador_columnas++;
                posicion++;
            }
            posicion++;
            contador_columnas = 0;
        }
        contador_filas++;
    }
    return (0);
}