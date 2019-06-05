/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:14 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/05 09:09:52 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newsub;

	i = 0;
	newsub = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL || newsub == NULL)
		return (NULL);
	while (i < len)
	{
		newsub[i] = s[i + start];
		i++;
	}
	newsub[i] = '\0';
	return (newsub);
}
