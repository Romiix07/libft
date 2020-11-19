/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:38:08 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 16:39:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = -1;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
		while (++i < (size - 1) && src[i])
			dest[i] = src[i];
	if (size > 0 && i < size)
		dest[i] = '\0';
	return (src_len);
}
