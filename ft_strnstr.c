/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:06:50 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/27 10:53:08 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while ((needle[j] != '\0') && (haystack[i + j] == needle[j]) \
					&& ((i + j) < len))
				++j;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}
