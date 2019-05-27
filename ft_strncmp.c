/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:16:12 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/27 13:18:34 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i <= n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if ((i <= n && (s1[i] == '\0' && s2[i] != '\0')) ||
			(s2[i] == '\0' && s1[i] != '\0'))
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
