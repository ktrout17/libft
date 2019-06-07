/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:06:20 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/07 10:47:53 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	new = (char *)malloc(ft_strlen(s) + 1);
	if (new != '\0')
	{
		while (*s != '\0')
		{
			new[i] = (*f)(*s);
			i++;
			s++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
