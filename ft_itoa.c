/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:53:36 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/07 10:44:33 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char    *check_min_int(char *minint)
{
    int        i;
    char    *min;

    i = 0;
    min = ft_strnew(11);
    while (i < 11)
    {
        min[i] = minint[i];
        i++;
    }
    return (min);
}

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
		n = n / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	size_t		len;
	char		*res;

	if (n == -2147483648)
		return (check_min_int("-2147483648"));
	len = itoa_len(n);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
		res[0] = '-';
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		res[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (res);
}
