/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:53:36 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/06 15:11:16 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		itoa_len(int n)
{
	size_t		len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	size_t		len;
	size_t		e;
	char		*res;

	len = itoa_len(n);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		e = 1;
	}
	else
		e = 0;
	while (len-- > e)
	{
		res[len] = '0' + n % 10;
		if (n < 0)
			n = n * -1;
		else
			n = n * 1;
		n /= 10;
	}
	return (res);
}
