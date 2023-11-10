/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_index_rotation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:12:06 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 20:58:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	have_future(t_circle **b, int index, int flag)
{
	t_circle	*current;
	int			i;

	i = (*b)->order;
	if (flag == 0)
		current = (*b)->next;
	else
		current = (*b)->prev;
	while (current->order != index)
	{
		if (current->order == i + 1)
			i++;
		if (flag == 0)
			current = current->next;
		else
			current = current->prev;
	}
	if (i == index - 1)
		return (1);
	return(0);
}

static void	pre_rotate_loop(t_circle **a, t_circle **b, int index)
{
	while ((*b)->order != index)
	{
		if ((*b)->order == index)
			push_a(a, b);
		if (have_future(b, index, 0))
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
		if (have_future(b, index, 1))
		{
			push_a(a, b);
			rotate_a(a);
		}
		else
			reverse_rotate_b(b);
	}
}

static void	pre_rev_rot_loop_flag(t_circle **a, t_circle **b, int index)
{
	if ((*b)->order != index)
		reverse_rotate_all(a, b);
}

void	rot_x(t_circle **a, t_circle **b, int index, int flag)
{
	int	rr;
	int rrr;

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
		if (flag == 1)
			pre_rev_rot_loop_flag(a, b, index);
		else
			pre_rev_rot_loop(a, b, index);
	}
}
