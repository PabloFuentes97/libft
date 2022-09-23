#include <stdlib.h>
#include <stdio.h>

typedef struct t_list{ //en lugar de llamarlo Nodo se llama s_list
        void *content; // content es el valor a almacenar
        struct t_list *next; //next es la direccion de memoria del siguiente nodo // como nodo se llama s_list, también aquí se llama s_list el puntero al siguiente nodo
    }t_list;

t_list *ft_lstnew(void *content)
{
    t_list *nodo;

    nodo = (t_list*)malloc(sizeof(t_list));
    nodo->content = content;
    nodo->next = NULL;
    return (nodo);
}
void imprimir_nodo(t_list *head)
{
	void *ptr;  
	ptr = &(head->content);   
    if (head == NULL)
        printf("El nodo está vacío");
	while (head != NULL)
	{
		printf("%d\n", *(int*)head->content);
		head = head->next;
	}
}

void f(void *node)
{
    int valor;

    valor = 5;
    node = (t_list*)node;
    node->content = valor;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    void *ptr_contenido;
    
    ptr_contenido = &(lst->content);
    while (lst != NULL)
    {
        lst->content = f((void*)ptr_contenido);
        lst = lst->next;
    }
}


int main(void)
{
	void (*pfunction)(void *node);
	int numero;
	int *content;
    
    pfunction = &f;
	numero = 7;
	content = &numero;
	t_list *nodo;
	nodo = ft_lstnew((void*)content);
	imprimir_nodo(nodo);
    ft_lstiter(nodo, pfunction);
    imprimir_nodo(nodo);

}