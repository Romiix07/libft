/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:45:41 by romain            #+#    #+#             */
/*   Updated: 2020/11/17 10:46:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmenm, size_t size)
{
	long long	overflow;
	void		*ptr;

	if (nmenm == 0 || size == 0)
		return (NULL);
	if ((overflow = (nmenm * size)) > 2147483647)
		return (NULL);
	if ((ptr = malloc(nmenm * size)) == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmenm * size);
	return (ptr);
}
