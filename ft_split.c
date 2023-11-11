/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:01 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 18:43:12 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_split_size(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			size++;
		i++;
	}
	return (size);
}

static void	ft_fill_split(char **split, const char *s, char c, int size)
{
	int	save;
	int	i;
	int	line_no;

	i = 0;
	line_no = 0;
	while (s[i] && s[i] == c)
		i++;
	save = i;
	while (s[i] && line_no < size)
	{
		if (i != 0 && s[i - 1] != c && s[i] == c)
		{
			split[line_no] = ft_substr(s, save, i - save);
			line_no++;
		}
		if (i != 0 && s[i - 1] == c && s[i] != c)
			save = i;
		i++;
	}
	if (i != 0 && s[i] == '\0' && s[i - 1] != c)
		split[line_no] = ft_substr(s, save, i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		split_size;

	if (!s)
		return (NULL);
	split_size = ft_get_split_size(s, c);
	split = malloc(sizeof(char *) * (split_size + 1));
	if (!split)
		return (NULL);
	ft_fill_split(split, s, c, split_size);
	split[split_size] = 0;
	return (split);
}
