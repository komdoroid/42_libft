#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		printf("%s ->", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	int	i;
	char	source1[] = "Hello ";
	char	source2[] = "World !";

	char	*str1 = (char *)malloc(10);
	if (!str1)
		return (1);
	char	*str2 = (char *)malloc(10);
	if (!str2)
		return (1);
	i = 0;
	while (source1[i] != '\0')
	{
		str1[i] = source1[i];
		i++;
	}
	i = 0;
	while (source2[i] != '\0')
	{
		str2[i] = source2[i];
		i++;
	}
	t_list	*head = ft_lstnew((void *)str1);
	t_list	*node1 = ft_lstnew((void *)str2);

	ft_lstadd_back(&head, node1);
	print_list(head);
	ft_lstdelone(head, del_content);
	print_list(head);
}

