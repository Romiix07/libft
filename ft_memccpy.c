/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:03:38 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 23:03:25 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*destcpy;
	const unsigned char		*srccpy;

	i = -1;
	destcpy = dest;
	srccpy = src;
	while (++i < n)
	{
		destcpy[i] = srccpy[i];
		if (srccpy[i] == (unsigned char)c)
			return (dest + i + 1);
	}
	return (NULL);
}
