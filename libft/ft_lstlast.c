<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:46:39 by diatisin          #+#    #+#             */
/*   Updated: 2026/06/08 11:47:20 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> ec08bee0a197fc3ec42809c8af8dd258025b6466
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
