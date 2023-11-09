/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_del_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:14:39 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 17:26:15 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	circle_del_one(t_circle **first, t_circle *current)
{
	if (!first || !current || circle_size(*first) == 1)
	{
		*first = NULL;
		return ;
	}
	if (current == *first)
		*first = (*first)->next;
	current->prev->next = current->next;
	current->next->prev = current->prev;
}
