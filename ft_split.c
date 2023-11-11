/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:01 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/11 15:31:47 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	while (src[i] && i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// static int	get_split_size(char const *s, char c)
// {
// 	int	i;
// 	int	size;

// 	i = 0;
// 	size = 0;
// 	while (s[i] == c)
// 		i++;
// 	if (s[i] != c && s[i] != '\0')
// 		size++;
// 	while (s[i])
// 	{
// 		if (s[i + 1] != c && s[i + 1] != '\0' && s[i] == c)
// 		{
// 			size++;
// 			while (s[i + 1] && s[i] == c)
// 				i++;
// 		}
// 		i++;
// 	}
// 	return (size);
// }

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

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		save;
// 	int		size;
// 	char	**split;

// 	size = get_split_size(s, c);
// 	split = (char **)malloc(sizeof(char *) * (size + 1));
// 	if (!split)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i] && j < size)
// 	{
// 		while (s[i] == c)
// 			i++;
// 		save = i;
// 		while (s[i] && s[i] != c)
// 			i++;
// 		split[j++] = ft_strndup(&s[save], i - save);
// 		i++;
// 	}
// 	split[j] = 0;
// 	return (split);
// }

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
			split[line_no] = ft_strndup(&str[save], i - save);
			line_no++;
		}
		if (i != 0 && str[i - 1] == sep && str[i] != sep)
			save = i;
		i++;
	}
	if (i != 0 && str[i] == '\0' && str[i - 1] != sep)
		split[line_no] = ft_strndup(&str[save], i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		split_size;

	split_size = ft_get_split_size(s, c);
	split = (char **)malloc(sizeof(char *) * split_size + 1);
	if (!split)
		return (NULL);
	ft_fill_split(split, s, c, split_size);
	split[split_size] = (char *)(malloc(sizeof(char)));
	if (!split[split_size])
		return (NULL);
	split[split_size] = 0;
	return (split);
}
