/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:05:14 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 23:01:09 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;

	mapi = ft_strdup(s);
	if (s == NULL || s == NULL || mapi == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		mapi[i] = (*f)((unsigned int)i, mapi[i]);
	return (mapi);
}
