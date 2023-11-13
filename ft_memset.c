/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:58:09 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/13 13:10:22 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned long	i;

	if (!s)
		return (NULL);
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (s);
}
