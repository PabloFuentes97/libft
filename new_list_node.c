/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuentes <pfuentes@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:02:08 by anegrin-          #+#    #+#             */
/*   Updated: 2022/09/20 13:00:29 by pfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list *ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	new_list(t_list *head)
{
	t_list	*list;
	int		i;
	char	*cont;

	cont = (char *)malloc(4);
	cont = "hol";
	
	list = head;
	
	i = 5;
	while (i--)
	{
		list->next = ft_lstnew((void *)cont);
		list = list->next;
	}
	list->next = NULL;
}

void print(t_list *head) 
{
   	while (head != NULL) 
	{
        printf("%s -", head->content);
        head = head->next;
    }
}

int	main(void)
{
	t_list *head;
	t_list  *first_node;
	char	*cont;

	cont = (char *)malloc(4);
	cont = "hol";
	
	first_node = ft_lstnew((void *)cont); 
	head = first_node;
	
	new_list(head);
	print(head);
	return (0);
}