/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:49:19 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 18:09:49 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	new = ft_lstnew((*f)(lst->content));
// 	if (!new)
// 		return (NULL);
// 	ft_lstdelone(lst, del);
// 	while (lst)
// 	{
// 		ft_lstadd_back(&new, ft_lstnew((*f)(lst->content)));
// 		ft_lstdelone(lst, del);
// 	}
// 	return (new);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*map;

	if (!f || !del)
		return (NULL);
	map = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, new);
		lst = lst->next;
	}
	return (map);
}
