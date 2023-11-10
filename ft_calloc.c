/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:08:08 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/10 14:11:01 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb <= 0 || size <= 0)
		return (malloc(0));
	if (nmemb >= INT_MAX || size >= INT_MAX || nmemb * size > INT_MAX)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (!arr)
	 	return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
