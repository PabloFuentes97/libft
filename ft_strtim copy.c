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

char *ft_strtrim(char const *s1, char const *set)
{
    int contador;
    char *string_nueva;
    int s1_len;
    int set_len;
    int posicion_izquierda;
    int posicion_derecha;

    s1_len = ft_strlen(s1);
    set_len = ft_strlen(set);
    posicion_izquierda = 0;
    posicion_derecha = ft_strlen(s1) - 1; 

    //calcular posicion izquierda - meter luego en funcion aparte
    contador = 0;

    while (set[contador] != '\0')
    {
        if (s1[posicion_izquierda] == set[contador])
        {
            posicion_izquierda++;
            contador = 0;
        }
            else
                contador++;
    }

    //calcular posicion derecha - meter luego en funcion aparte
    contador = 0;
    while (set[contador] != '\0')
    {
        if (s1[posicion_derecha] == set[contador])
        {
            posicion_derecha--;
            contador = 0;
        }
            else
                contador++;
    }

    //inicializar string nuevo, hacer malloc y copiar valores
    contador = 0;
    string_nueva = (char*)malloc(sizeof(char) * (posicion_derecha - posicion_izquierda));
    while (posicion_izquierda <= posicion_derecha)
    {
        string_nueva[contador] = s1[posicion_izquierda];
        contador++;
        posicion_izquierda++;
    }
    return (string_nueva);
}

int main(void)
{
    int contador;
    char *string;

    contador = 0;
    char s1[] = "Bienvenidos";
    char set[] = "Bois";
    string = ft_strtrim(s1, set);
    while (string[contador] != '\0')
    {
        printf("%c", string[contador]);
        contador++;
    }
}