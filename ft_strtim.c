#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int contador;

    contador = 0;
    while (str[contador] != '\0')
        contador++;
    return (contador);
}

int calcular_coincidencias(char const *s1, char const *set)
{
    int contador1; // contador elemento de s1
    int contador2; // contador elemento de set
    int contador3; //contador coincidencias

    contador1 = 0;
    contador2 = 0;
    contador3 = 0;
    while (s1[contador1] != '\0')
    {
        while (set[contador2] != '\0')
        {
            if (s1[contador1] == set[contador2])
                contador3++;
            contador2++;
        }
        contador2 = 0;
        contador1++;
    }
    return (contador3);
}

int calcular_coincidencia_posicion(char const *s1, char const *set, int posicion) //envia una posicion, calcula si ese elemento está en el set
{
    int contador1; // contador elemento de s1

    contador1 = 0;
    while (set[contador1] != '\0')
    {
        if (s1[posicion] == set[contador1])
            return (1);
        contador1++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int contador1;
    int contador2;
    char *string_nueva;
    int s1_len;
    int coincidencias;

    s1_len = ft_strlen(s1);
    coincidencias = calcular_coincidencias(s1, set);
    contador1 = 0;
    contador2 = 0;
    string_nueva = (char*)malloc(sizeof(char) * (s1_len - coincidencias));
    while (s1[contador2] != '\0')
    {
        if (calcular_coincidencia_posicion(s1, set, contador2) == 1)
            contador2++;
        else if (calcular_coincidencia_posicion(s1, set, contador2) == 0)
            string_nueva[contador1] = s1[contador2];
            contador1++;
            contador2++;
    }
    return (string_nueva);
}

int main(void)
{
    int contador;
    char *string;

    contador = 0;
    char s1[] = "Bienvenidos"; Bieveio
    char set[] = "dsn";
    string = ft_strtrim(s1, set);
    while (string[contador] != '\0')
    {
        printf("%c", string[contador]);
        contador++;
    }
}