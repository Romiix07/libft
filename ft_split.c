/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouduri <rmouduri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 09:58:50 by rmouduri          #+#    #+#             */
/*   Updated: 2020/11/19 12:29:52 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*strdup_charset(char *str, char c)
{
	int		size;
	int		i;
	char	*strdup;

	if (!str)
		return (NULL);
	i = 0;
	size = 1;
	while (str[i] && str[i] != c)
	{
		i++;
		size++;
	}
	if (i > 0)
		strdup = malloc(sizeof(char) * size);
	else
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

static int	get_spl(char *str, char c)
{
	int	splits;
	int	i;

	if (str == NULL || !str || str[0] == '\0')
		return (0);
	splits = 0;
	i = 0;
	while (str[++i])
		if (str[i] == c && str[i - 1] != c)
			splits++;
	if (str[i - 1] != c)
		splits++;
	return (splits);
}

static char	**ret_error(char **split, int size)
{
	char	**error;
	int		i;

	if ((error = malloc(sizeof(char *) * 1)) == NULL)
		return (NULL);
	error[0] = NULL;
	i = -1;
	while (++i < size)
		free(split[i]);
	if (split != NULL)
		free(split);
	return (error);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		split_i;

	split = NULL;
	if (!get_spl((char *)s, c))
		return (ret_error(split, 0));
	if ((split = malloc(sizeof(char *) * (get_spl((char *)s, c) + 1))) == NULL)
		return (ret_error(split, 0));
	split[get_spl((char *)s, c)] = NULL;
	i = 0;
	split_i = -1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			if ((split[++split_i] = strdup_charset((char *)&s[i], c)) == NULL)
				return (ret_error(split, split_i));
		while (s[i] && s[i] != c)
			i++;
	}
	return (split);
}
