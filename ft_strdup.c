/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:33:34 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 17:38:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;

	if ((size = ft_strlen(s)) == 0)
		return (NULL);
	if ((dup = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	size = -1;
	while (s[++size])
		dup[size] = s[size];
	dup[size] = '\0';
	return (dup);
}
