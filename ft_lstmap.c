#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		node = (t_list *)malloc(sizeof(t_list));
		if (node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		content = f(lst->content);
		if (content == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->content = content;
		node->next = NULL;
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
