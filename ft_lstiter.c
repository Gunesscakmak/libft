#include "libft.h"
#include <stddef.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next_node;

	if (lst == NULL || f == NULL)
		return ;
	next_node = lst;
	while (next_node != NULL)
	{
		f(next_node->content);
		next_node = next_node->next;
	}
}

