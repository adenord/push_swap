/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:00:28 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 10:42:47 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	circle_add_back(t_circle **circle, t_circle *new)
{
	t_circle	*last;

	if (!(*circle))
		*circle = new;
	else
	{
		last = (*circle)->prev;
		last->next = new;
		new->prev = last;
		new->next = *circle;
		(*circle)->prev = new;
	}
}
