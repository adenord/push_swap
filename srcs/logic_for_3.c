/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_for_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:25:07 by adenord           #+#    #+#             */
/*   Updated: 2023/11/08 10:08:49 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_n(t_circle **a)
{
	int	min;

	min = (*a)->order;
	if (min > (*a)->next->order)
		min = (*a)->next->order;
	if (min > (*a)->next->next->order)
		min = (*a)->next->next->order;
	return (min);
}

static int	moy_n(t_circle **a, int min, int max)
{
	t_circle	*current;

	current = *a;
	while (current->order == min || current->order == max)
		current = current->next;
	return (current->order);
}

static int	max_n(t_circle **a)
{
	int	max;

	max = (*a)->order;
	if (max < (*a)->next->order)
		max = (*a)->next->order;
	if (max < (*a)->next->next->order)
		max = (*a)->next->next->order;
	return (max);
}

void	logic_for_3(t_circle **a)
{
	int tab[3];

	tab[0] = min_n(a);
	tab[2] = max_n(a);
	tab[1] = moy_n(a, tab[0], tab[2]);
	if ((*a)->order == tab[0])
	{
		swap_a(a);
		rotate_a(a);
	}
	if (((*a)->next->order == tab[0]) && (*a)->order == tab[1])
		swap_a(a);
	if ((*a)->next->order == tab[2] && (*a)->order == tab[1])
		reverse_rotate_a(a);
	if ((*a)->next->order == tab[1] && (*a)->order == tab[2])
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	if ((*a)->next->order == tab[0] && (*a)->order == tab[2])
		rotate_a(a);
}
