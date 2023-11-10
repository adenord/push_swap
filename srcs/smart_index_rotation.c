/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_index_rotation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:12:06 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 08:32:14 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	smart_index_rr(t_circle **circle, int index)
{
	int			i;
	t_circle	*current;

	i = 0;
	current = *circle;
	while ((current)->order != index && i < (int)circle_size(*circle))
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
	while (((current)->order != index) && i < (int)circle_size(*circle))
	{
		current = (current)->prev;
		i++;
	}
	return (i);
}

static void	exception_opti(t_circle **a, t_circle **b, int index, int flag)
{
	if (flag == 0)
		rotate_loop(b, index, 1);
	if (flag == 1)
		reverse_rotate_loop(b, index, 1);
	push_a(a, b);
	rotate_a(a);
}

static int	is_min(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
		return (a);
	if (b <= a && b <= c && b <= d)
		return (b);
	if (c <= a && c <= b && c <= d)
		return (c);
	if (d <= a && d <= b && d <= c)
		return (d);
	return (0);
}

void	rot_x(t_circle **a, t_circle **b, int index)
{
	int	rr;
	int rrr;
	int	o_rr;
	int o_rrr;

	rr = smart_index_rr(b, index);
	rrr = smart_index_rrr(b, index);
	o_rr = smart_index_rr(b, index - 1);
	o_rrr = smart_index_rrr(b, index - 1);
	if (is_min(rr, rrr, o_rr, o_rrr) == o_rr)
		exception_opti(a, b, o_rr, 0);
	else if (is_min(rr, rrr, o_rr, o_rrr) == o_rrr)
		exception_opti(a, b, o_rrr, 1); 
	else if (rr <= rrr)
	{
		rotate_loop(b, rr, 1);
	}
	else
		reverse_rotate_loop(b, rrr, 1);
}
