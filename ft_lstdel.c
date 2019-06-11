/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:40:14 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/11 13:44:29 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *current;

	if (del != NULL && *alst != NULL)
	{
		current = *alst;
		while (current != NULL)
		{
			next = current->next;
			(*del)(current->content, current->content_size);
			free(current);
			current = next;
		}
		*alst = NULL;
	}
}
