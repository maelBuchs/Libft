/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:11 by asuc              #+#    #+#             */
/*   Updated: 2023/10/31 18:01:35 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*from;
	char	*to;

	from = (char *)src;
	to = (char *)dest;
	i = 0;
	if (from == to || n == 0)
		return (dest);
	if (to > from && to - from < (int)n)
	{
		// `dest` chevauche la fin de `src`
		i = n - 1 ;
		while (i > 0)
		{
			to[i] = from[i];
			i--;
		}
		return (dest);
	}
	if (from > to && from - to < (int)n)
	{
		// `dest` chevauche le début de `src`
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
		return (dest);
	}
	// src` et `dest` se chevauchent pas
	ft_memcpy(dest, src, n);
	return (dest);
}
