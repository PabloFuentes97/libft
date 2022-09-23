typedef struct t_list{ //en lugar de llamarlo Nodo se llama s_list
        void *content; // content es el valor a almacenar
        struct s_list *next; //next es la direccion de memoria del siguiente nodo // como nodo se llama s_list, también aquí se llama s_list el puntero al siguiente nodo
    }t_list;

t_list *ft_lstnew(void *content)
{
    Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->content = content;
    nodo->next = NULL;
    return (nodo);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *actual = *lst;
    while (actual->next != NULL)
        actual = actual->next;
    actual->next = new;
}

int main(void)
{
    t_list *head;
    t_list *nuevo;
	head = ft_lstnew(6);
    nuevo = ft_lstnew(7);
    t_list *actual = head;
	ft_lstadd_front(head, nuevo);
    while (actual != NULL)
    {
        printf("%d", actual.content);
        actual = actual->next;
    }
}