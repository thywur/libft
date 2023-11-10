/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:01 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/10 15:44:48 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	get_split_size(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] == c)
		i++;
	if (s[i] != c && s[i] != '\0')
		size++;
	while (s[i])
	{
		if (s[i + 1] != c && s[i + 1] != '\0' && s[i] == c)
		{
			size++;
			while (s[i + 1] && s[i] == c)
				i++;
		}
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		save;
	int		size;
	char	**split;

	size = get_split_size(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < size)
	{
		while (s[i] == c)
			i++;
		save = i;
		while (s[i] && s[i] != c)
			i++;
		split[j++] = ft_strndup(&s[save], i - save);
		i++;
	}
	split[j] = 0;
	return (split);
}
