/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:56:41 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 19:04:31 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_charset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	while (is_in_charset((char *)set, s1[i]) && s1[i])
		i++;
	while (is_in_charset((char *)set, s1[size - 1]) && size - 1 > 0)
		size--;
	if (size - i > 0)
		size = size - i;
	else
		size = 0;
	trim = (char *)malloc(sizeof(char) * (size + 1));
	if (!trim)
		return (NULL);
	j = 0;
	while (j < size)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}
