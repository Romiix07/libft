/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:37:09 by romain            #+#    #+#             */
/*   Updated: 2020/11/19 12:14:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		*get_number(char *s, long n, size_t size)
{
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		s = get_number(s, n / 10, size - 1);
	s[size] = (n % 10) + 48;
	return (s);
}

static size_t	get_size(long n)
{
	int		cpy;
	size_t	size;

	cpy = n;
	size = 1;
	if (n < 0)
	{
		++size;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		++size;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*s;
	size_t	size;

	size = get_size((long)n);
	if ((s = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	s = get_number(s, (long)n, size - 1);
	s[size] = '\0';
	return (s);
}
