typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void	ft_lstiter(struct s_list *lst, void (*f)(void *));
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);