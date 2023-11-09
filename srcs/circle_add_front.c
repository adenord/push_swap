/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_add_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:26:43 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 16:51:07 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	circle_add_front(t_circle **first, t_circle *new)
{
	if (*first)
	{
		new->next = *first;
		new->prev = (*first)->prev;
		new->prev->next = new;
		(*first)->prev = new;
		*first = new;
	}
	else
	{
		*first = new;
		new->next = new;
		new->prev = new;
	}
}
