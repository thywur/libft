/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:01 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 17:20:25 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_split_size(char const *str, char sep)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
			size++;
		i++;
	}
	return (size);
}

static void	ft_fill_split(char **split, const char *str, char sep, int split_size)
{
	int	save;
	int	i;
	int	line_no;

	i = 0;
	line_no = 0;
	while (str[i] && str[i] == sep)
		i++;
	save = i;
	while (str[i] && line_no < split_size)
	{
		if (i != 0 && str[i - 1] != sep && str[i] == sep)
		{
			split[line_no] = ft_substr(str, save, i - save);
			line_no++;
		}
		if (i != 0 && str[i - 1] == sep && str[i] != sep)
			save = i;
		i++;
	}
	if (i != 0 && str[i] == '\0' && str[i - 1] != sep)
		split[line_no] = ft_substr(str, save, i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		split_size;

	split_size = ft_get_split_size(s, c);
	split = malloc(sizeof(char *) * (split_size + 1));
	if (!split)
		return (NULL);
	ft_fill_split(split, s, c, split_size);
	split[split_size] = 0;
	return (split);
}
