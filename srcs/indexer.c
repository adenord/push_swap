/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:55:05 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 18:21:31 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_circle	*find_smallest(t_circle **circle, size_t len)
{
	size_t		i;
	int			min;
	t_circle	*current;
	t_circle	*min_circle;

	current = (*circle);
	i = 0;
	min = current->value;
	min_circle = current;
	while (i < len)
	{
		if (current->value < min)
		{
			min_circle = current;
			min = current->value;
		}
		current = current->next;
		i++;
	}
	min_circle->order = 1;
	return (min_circle);
}

static t_circle	*find_tmp(t_circle *tmp, t_circle *last_min, t_circle **circle)
{
	t_circle	*current;

	current = *circle;
	while (tmp == last_min)
	{
		if (current->value > tmp->value)
			tmp = current;
		current = current->next;
	}
	return (tmp);
}

void	indexer(t_circle **circle, size_t len)
{
	size_t		i;
	size_t		index;
	t_circle	*last_min;
	t_circle	*current;
	t_circle	*tmp;

	i = 0;
	index = 2;
	last_min = find_smallest(circle, len);
	tmp = last_min;
	while (index <= len)
	{
		current = *circle;
		i = -1;
		tmp = find_tmp(tmp, last_min, circle);
		while (++i < len)
		{
			if (current->value > last_min->value && current->value < tmp->value)
				tmp = current;
			current = current->next;
		}
		tmp->order = index;
		index++;
		last_min = tmp;
	}
}
