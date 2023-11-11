/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:43:37 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 18:41:58 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	unsigned long	i;

	if (!s)
		return (NULL);
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
	return (s);
}
