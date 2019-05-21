/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:35:59 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/21 14:52:46 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source < dest)
	{
		while (--len >= 0)
			*(dest + len) = *(source + len);
	}
	else
	{
		while (++i < len)
			*(dest + i) = *(source + i);
	}
	return (dst);
}
