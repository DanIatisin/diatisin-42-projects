#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_lst;

	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			last_lst = lst;
		lst = lst->next;
	}
	return (last_lst);
}
