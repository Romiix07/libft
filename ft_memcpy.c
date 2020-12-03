/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:59:10 by romain            #+#    #+#             */
/*   Updated: 2020/11/23 12:05:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	destcpy = dest;
	srccpy = src;
	i = -1;
	while (++i < n)
		destcpy[i] = srccpy[i];
	return (dest);
}
