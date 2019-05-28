/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:06:50 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/28 16:43:37 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == '\r') && str[i] != '\0')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (res > 469762049 && neg == 1)
			return (-1);
		else if (res > 469762049 && neg == -1)
			return (0);
		res = ((res * 10) + str[i] - '0');
		i++;
	}
	return (res * neg);
}
