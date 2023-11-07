/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:52:57 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/07 18:08:55 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	unsigned long	i;

// 	str = (unsigned char *)s;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 			return (&str[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	return (ft_strchr(str, n));
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Aticleworld";
    char *ptr = ft_memchr(s,'c',sizeof(s));
    if (ptr != NULL)
    {
        printf ("'c' found at position %d.\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
