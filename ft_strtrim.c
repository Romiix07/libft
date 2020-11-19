/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:46:33 by romain            #+#    #+#             */
/*   Updated: 2020/11/17 17:02:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		isset(char c, const char *set)
{
	int	i;

	if (set == NULL || !set)
		return (0);
	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

static void		get_values(char const *s1, char const *set, int *i, int *limit)
{
	int	tmp;

	*i = 0;
	while (isset(s1[*i], set))
		++*i;
	tmp = *i;
	*limit = ft_strlen(s1);
	if (isset(s1[*limit - 1], set))
		while (isset(s1[*limit - 1], set))
			--*limit;
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		i;
	int		j;
	int		limit;
	char	*trim;

	if (s1 == NULL)
		return (NULL);
	get_values(s1, set, &i, &limit);
	j = i;
	len = 0;
	while (!isset(s1[j++], set))
		++len;
	if ((trim = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	j = -1;
	while (s1[i] && i < limit)
		trim[++j] = s1[i++];
	trim[++j] = '\0';
	return (trim);
}
