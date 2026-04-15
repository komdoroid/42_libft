#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next_node = node->next;
		del(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}

#include <stdio.h>

void	print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("X");
	t_list	*node2 = ft_lstnew("Y");
	t_list	*node3 = ft_lstnew("Z");


}
