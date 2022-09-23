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

char *ft_strjoin(char const *s1, char const *s2)
{
    int contador1;
    int contador2;
    int contador3;
    int s1_len;
    int s2_len;
    char *strjoin;

    contador1 = 0;
    contador2 = 0;
    contador3 = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    strjoin = (char*)malloc(sizeof(char) * (s1_len + s2_len));
    while (s1[contador1] != '\0')
    {
        strjoin[contador3] = s1[contador1];
        contador3++;
        contador1++;
    }
    while (s2[contador2] != '\0')
    {
        strjoin[contador3] = s2[contador2];
        contador3++;
        contador2++;
    }
    strjoin[contador3] = '\0';
    return (strjoin);
}

int main(void)
{
    int contador;

    contador = 0;
    char s1[] = "hola";
    char s2[] = "buenas";
    char *s3;
    s3 = ft_strjoin(s1, s2);

    while (s3[contador] != '\0')
    {
        printf("%c", s3[contador]);
        contador++;
    }
    return (0);
}