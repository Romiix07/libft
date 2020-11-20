/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:45:41 by romain            #+#    #+#             */
/*   Updated: 2020/11/20 18:00:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmenm, size_t size)
{
	void		*ptr;

	if ((ptr = malloc(nmenm * size)) == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmenm * size);
	return (ptr);
}
