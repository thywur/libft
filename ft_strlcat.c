/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:55:06 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 15:33:46 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	unsigned long	i;
// 	unsigned long	dst_size;
// 	unsigned long	src_size;

// 	dst_size = ft_strlen(dst);
// 	src_size = ft_strlen(src);
// 	i = 0;
// 	if (size < dst_size)
// 		src_size += size;
// 	else
// 		src_size += dst_size;
// 	while (src[i] && dst_size + i < size - 1 && size != '\0')
// 	{
// 		dst[dst_size + i] = src[i];
// 		i++;
// 	}
// 	dst[dst_size + i] = '\0';
// 	return (src_size);
// }

static char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	dest_size;
	unsigned long	src_size;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (size + src_size);
	else if (size <= dest_size + src_size)
	{
		ft_strncat(dst, src, size - dest_size - 1);
		return (dest_size + src_size);
	}
	else
	{
		ft_strncat(dst, src, src_size);
		return (dest_size + src_size);
	}
}
