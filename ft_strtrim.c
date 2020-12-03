/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:46:33 by romain            #+#    #+#             */
/*   Updated: 2020/11/21 17:36:07 by romain           ###   ########.fr       */
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

static char		*get_trim(const char *s, int start, int end)
{
	char	*trim;
	int		i;
	int		size;

	size = (ft_strlen(s) - start) - (ft_strlen(s) - end);
	if ((trim = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	i = -1;
	while (s[start] && start < end)
		trim[++i] = s[start++];
	trim[++i] = '\0';
	return (trim);
}

char			*ft_strtrim(const char *s, const char *set)
{
	int		start;
	int		end;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && isset(s[start], set))
		++start;
	end = ft_strlen(s);
	while (end > 0 && isset(s[end - 1], set))
		--end;
	if (end < start)
		end = start;
	return (get_trim(s, start, end));
}
