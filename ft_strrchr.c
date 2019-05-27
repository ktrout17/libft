/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:37:43 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/23 13:28:02 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char *)s;
		++s;
	}
	if ((char *)s != '\0')
		return ((char *)s);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
