#include <stdio.h>

void *my_memset(void *s, int c,  unsigned int len)
{
    unsigned int contador;
    unsigned char* p;
    
    contador = 0;
    p = s;
    while(contador < len)
    {
        p[contador]= (unsigned char)c;
        contador++;
    }
    return (s);
}
//function to print char of an char array
void printArray(char arr[], int n)
{
    int i = 0;
    for (i = 0; i<n; i++)
    {
        printf("%c\n", arr[i]);
    }
}
int main()
{
    char arr[] = "ABCD";
    // Print Array before calling memset
    printArray(arr, 4);
    //Calling own created memset
    my_memset(arr,'0', sizeof(arr));
    // Print Array After calling memset
    printArray(arr, 4);
    return 0;
}