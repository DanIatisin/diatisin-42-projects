<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diatisin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:46:10 by diatisin          #+#    #+#             */
/*   Updated: 2026/06/08 11:46:12 by diatisin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> ec08bee0a197fc3ec42809c8af8dd258025b6466
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
