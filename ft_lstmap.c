/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:49:19 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/10 17:08:12 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f || !del)
		return ;
	new = ft_lstnew((*f)(lst->content));
	ft_lstdelone(lst, del);
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew((*f)(lst->content)));
		ft_lstdelone(lst, del);
	}
	return (new);
}
