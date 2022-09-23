#include <stdlib.h>
#include <stdio.h>

typedef struct t_list{ //creamos estructura de tipo nodo
        void *content; // content es el valor a almacenar
        struct t_list *next; //next es la direccion de memoria del siguiente nodo // 
    }t_list;

t_list *ft_lstnew(void *content) //función para crear un nuevo nodo
{
    t_list *nodo = (t_list*)malloc(sizeof(t_list)); //aloca memoria suficiente para tipo nodo y lo castea a tipo nodo
    nodo->content = content; //miembro content del nodo pasa a tener valor del content pasado como argumento
    nodo->next = NULL; //miembro next tiene valor nulo, porque la lista termina aquí, es el último elemento, no enlaza con otro nodo
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

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}

int main(void)
{

    void (*pdel)(void *node);
    int numero;
	int *content;
    t_list *nodo;

    pdel = &del;
	numero = 7;
	content = &numero;
	
	nodo = ft_lstnew((void*)content);
	imprimir_nodo(nodo);
	ft_lstdelone(nodo, pdel);
	imprimir_nodo(nodo);
}