/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:43:50 by romain            #+#    #+#             */
/*   Updated: 2020/11/19 12:13:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *find, size_t len)
{
	size_t	i;
	size_t	findln;

	if (find == NULL || find[0] == '\0')
		return ((char *)big);
	i = 0;
	findln = ft_strlen(find);
	while (big[i] && i < len)
	{
		if (findln > len - i)
			return (NULL);
		if (big[i] == find[0] && !ft_strncmp(&big[i], find, findln))
			return ((char *)&big[i]);
		++i;
	}
	return (NULL);
}
