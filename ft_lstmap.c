#include <stdlib.h>
#include <stdio.h>

typedef struct t_list{ //en lugar de llamarlo Nodo se llama s_list
        void *content; // content es el valor a almacenar
        struct t_list *next; //next es la direccion de memoria del siguiente nodo // como nodo se llama s_list, también aquí se llama s_list el puntero al siguiente nodo
    }t_list;

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
 void *ptr_contenido;
    
    ptr_contenido = &(lst->content);
    while (lst != NULL)
    {
        lst->content = f((void*)ptr_contenido);
        lst = lst->next;
    }
}