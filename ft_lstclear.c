#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	node = *lst; //node, lstnin isaret ettigi t_list isaretcisinin isaret ettigi ilk node'u (t_list'i) isaret ediyor
	while (node != NULL)
	{
		next_node = node->next;
		del(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}

void	del(void *ptr)
{
	if (ptr == NULL)
		return ;
	free(ptr);
}

#include <stdio.h>

int main()
{
	char a[] = "hello";
	t_list *ptr = ft_lstnew(a);
	ft_lstclear(&ptr, del);
	return (0);
}