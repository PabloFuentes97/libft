#include <stdio.h>
#include <stdlib.h>

char *ft_rev_int_tab(char *tab, int size)
{
	int		primer_elemento;
	int		ultimo_elemento;
	int		intercambiador;

	primer_elemento = 0;
	ultimo_elemento = size - 1;
	while (primer_elemento < ultimo_elemento)
	{
		intercambiador = tab[primer_elemento];
		tab[primer_elemento] = tab[ultimo_elemento];
		tab[ultimo_elemento] = intercambiador;
		primer_elemento++;
		ultimo_elemento--;
	}
    return (tab);
}

int calcular_num_elementos(int n)
{
    int resto; // %10 coge el resto de cifras
    int primer_bloque; // /10 coge primera cifra
    int contador;
    
    printf("El número original es: %d\n", n);
    primer_bloque = n;
    if (primer_bloque < 0)
        primer_bloque = primer_bloque * -1;
    contador = 1;
    while (primer_bloque > 10)
    {
        resto = primer_bloque % 10;
        primer_bloque = primer_bloque / 10; 
        contador++;
        printf("El primer bloque es: %d\n", primer_bloque);
        printf("El resto es: %d\n", resto);
    }
    printf("El número de elementos es: %d\n", contador);
    if (n < 0)
        contador++;
    return (contador);
}

char *ft_itoa(int n)
{
    int resto; // %10 coge ultima cifra
    int primer_bloque; // /10 coge primera cifras menos la última, el resto
    int contador;
    int num_elementos;
    char *array;

    n = caso_limite(n);
    num_elementos = calcular_num_elementos(n);
    array = (char*)malloc(sizeof(char) * num_elementos);
    printf("El número original es: %d\n", n);
    primer_bloque = n;
    if (primer_bloque < 0)
        primer_bloque = primer_bloque * -1;
    contador = 0;
    while (primer_bloque > 10)
    {
        resto = (primer_bloque % 10) + '0';
        primer_bloque = primer_bloque / 10; 
        array[contador] = resto;
        contador++;
        printf("El primer bloque es: %d\n", primer_bloque);
        printf("El resto es: %c\n", resto);
    }
    array[contador] = primer_bloque + '0';
    printf("El número de elementos es: %d\n", contador);
    if (n < 10)
        array[contador + 1] = 45;
    array = ft_rev_int_tab(array, num_elementos);
    return (array);
}

int caso_limite(int n) //comprobar si es un caso límite y cambiar el valor
{
    if (n >= -2147483648)
        n = 147483648;
    return (n);
}

int main (void)
{
    int n;
    
    n = -56436871;
    printf("El número en caracteres es: %s", ft_itoa(n));
}

