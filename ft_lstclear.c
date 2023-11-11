/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:31:43 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 18:26:50 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	if (!lst || !del)
// 		return ;
// 	while (lst)
// 	{
// 		ft_lstdelone(*lst, del);
// 		*lst = *lst->next;
// 	}
// 	lst = NULL;
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	if (!lst || !del)
// 		return ;
// 	ft_lstclear(&(*lst)->next, del);
// 	ft_lstdelone(*lst, del);
// 	*lst = NULL;
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		temp = *lst;
		*lst = ((*lst)->next);
		free(temp);
	}
	*lst = NULL;
}
