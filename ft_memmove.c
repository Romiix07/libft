/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:14:00 by romain            #+#    #+#             */
/*   Updated: 2020/11/19 13:27:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destcpy;
	const unsigned char	*srccpy;
	int					i;

	destcpy = dest;
	srccpy = src;
	i = -1;
	if ((unsigned long long)dest > (unsigned long long)src)
		while (n-- > 0)
			destcpy[n] = srccpy[n];
	else
		while ((size_t)++i < n)
			destcpy[i] = srccpy[i];
	return (dest);
}
