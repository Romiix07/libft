/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:05:38 by romain            #+#    #+#             */
/*   Updated: 2020/11/19 12:06:05 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1cpy;
	const unsigned char	*s2cpy;

	if (n == 0)
		return (0);
	i = 0;
	s1cpy = s1;
	s2cpy = s2;
	while ((unsigned char)s1cpy[i] && (unsigned char)s2cpy[i] &&
		(unsigned char)s1cpy[i] == (unsigned char)s2cpy[i] && i < n - 1)
		i++;
	return ((unsigned char)s1cpy[i] - (unsigned char)s2cpy[i]);
}
