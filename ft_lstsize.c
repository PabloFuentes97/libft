#include <stdio.h>
#include <stdlib.h>

typedef struct t_list{ //en lugar de llamarlo Nodo se llama s_list
        void *content; // content es el valor a almacenar
        struct t_list *next; //next es la direccion de memoria del siguiente nodo // como nodo se llama s_list, también aquí se llama s_list el puntero al siguiente nodo
    }t_list;

t_list *ft_lstnew(void *content)
{
    t_list *nodo = (t_list*)malloc(sizeof(t_list));
    nodo->content = content;
    nodo->next = NULL;
    return (nodo);
}
void imprimir_nodo(t_list *head)
{
	while (head != NULL)
	{
		printf("%d", head->content);
		head = head->next;
	}
}

int ft_lstsize(t_list *lst)
{
    int contador;

    contador = 0;
    while (head != NULL)
	    {
		    head = head->next;
            contador++;
	    }
    return (contador);
}

int main(void)
{
	t_list *nodo;
	nodo = ft_lstnew(6);
	imprimir_nodo(nodo);
}