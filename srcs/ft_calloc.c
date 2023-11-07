/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:08:08 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/07 19:13:52 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(nmemb * size);
	if (!arr || nmemb == 0 || size == 0)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
