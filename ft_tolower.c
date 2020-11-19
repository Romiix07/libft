/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <rmouduri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:49:38 by romain            #+#    #+#             */
/*   Updated: 2020/11/16 15:51:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(char c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return ((unsigned char)c + 32);
	return (c);
}
