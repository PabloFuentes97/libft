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

int ft_lstlast(t_list *lst)
{
    t_list *actual;

    actual = lst;
    while (actual->next != NULL)
		    actual = actual->next;
    return (actual);
}

int main(void)
{
	t_list *head;
    t_list *nuevo;
    int numero;
	int *content;

	numero = 7;
	*content = numero;
	t_list *nodo;
	nodo = ft_lstnew(content);
	head = ft_lstnew(6);
    nuevo = ft_lstnew(7);
    t_list *actual = head;
	ft_lstadd_back(head, nuevo);
    while (actual != NULL)
    {
        printf("%d", actual.content);
        actual = actual->next;
    }
}