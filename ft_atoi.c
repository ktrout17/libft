/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:06:50 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/21 11:24:48 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t i;
	size_t res;
	size_t neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	res = res * neg;
	return (res);
}
