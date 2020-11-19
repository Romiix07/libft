/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:00:58 by romain            #+#    #+#             */
/*   Updated: 2020/11/19 12:08:53 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*scpy;

	if (n == 0)
		return (NULL);
	i = 0;
	scpy = s;
	while (i < n - 1 && scpy[i] != (unsigned char)c)
		++i;
	if (scpy[i] == (unsigned char)c)
		return ((void *)&scpy[i]);
	return (NULL);
}
