/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:42:36 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/28 10:50:33 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (s != NULL & f != NULL)
	{
		ptr = s;
		while (*ptr != '\0')
			(*f)(ptr++);
	}
}
