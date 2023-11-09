/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_index_rotation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:12:06 by adenord           #+#    #+#             */
/*   Updated: 2023/11/09 14:57:29 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	smart_index_rr(t_circle **circle, int index)
{
	int			i;
	t_circle	*current;

	i = 0;
	current = *circle;
	while ((current)->order != index)
	{
		current = (current)->next;
		i++;
	}
	return (i);
}

static int	smart_index_rrr(t_circle **circle, int index)
{
	int	i;
	t_circle	*current;

	i = 0;
	current = *circle;
	while ((current)->order != index)
	{
		current = (current)->prev;
		i++;
	}
	return (i);
}

void	operator_rr(t_circle **b, int index)
{
	while (index > 0)
	{
		rotate_b(b);
		index--;
	}
}

void	operator_rrr(t_circle **b, int index)
{
	while (index > 0)
	{
		reverse_rotate_b(b);
		index--;
	}
}

void	rot_x(t_circle **b, int index)
{
	int	rr;
	int rrr;

	rr = smart_index_rr(b, index);
	rrr = smart_index_rrr(b, index);
	if (rr <= rrr)
	{
		operator_rr(b, rr);
	}
	else
		operator_rrr(b, rrr);
}
