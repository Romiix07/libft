/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:17:59 by romain            #+#    #+#             */
/*   Updated: 2020/11/17 14:38:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	if ((s = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	len = 0;
	i = -1;
	if (s1)
		while (s1[++i])
			s[len++] = s1[i];
	i = -1;
	if (s2)
		while (s2[++i])
			s[len++] = s2[i];
	s[len] = '\0';
	return (s);
}
