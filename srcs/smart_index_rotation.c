/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_index_rotation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:12:06 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 14:08:37 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	have_future(t_circle **a, t_circle **b)
{
	t_circle	*current;

	current = *b;
	if ((((*a)->prev->order == (int)(circle_size(*a) + circle_size(*b))) || \
	current->order > (*a)->prev->order))
		return (1);
	else
		return (0);
}

static void	pre_rotate_loop(t_circle **a, t_circle **b, int index)
{
	while ((*b)->order != index)
	{
		if ((*b)->order == index)
			push_a(a, b);
		if (have_future(a, b))
		{
			push_a(a, b);
			rotate_a(a);
		}
		else
			rotate_b(b);
	}
}

static void	pre_rev_rot_loop(t_circle **a, t_circle **b, int index)
{
	while ((*b)->order != index)
	{
		if ((*b)->order == index)
			push_a(a, b);
		if (have_future(a, b))
		{
			push_a(a, b);
			rotate_a(a);
		}
		else
			reverse_rotate_b(b);
	}
}

void	rot_x(t_circle **a, t_circle **b, int index, int flag)
{
	int	rr;
	int	rrr;

	rr = smart_index_rr(b, index);
	rrr = smart_index_rrr(b, index);
	if (rr <= rrr)
	{
		if (flag == 1)
			reverse_rotate_a(a);
		else
			pre_rotate_loop(a, b, index);
	}
	else
	{
		if (flag == 1 && (*b)->order != index)
			reverse_rotate_all(a, b);
		else
			pre_rev_rot_loop(a, b, index);
	}
}
