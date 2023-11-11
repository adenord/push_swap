/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_for_100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:21:08 by adenord           #+#    #+#             */
/*   Updated: 2023/11/11 12:09:12 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_in_order_in_b(t_circle **a, t_circle **b, size_t perimeter)
{
	size_t			min_moy;
	size_t			i;

	min_moy = perimeter / 3;
	i = 0;
	while (i < (min_moy * 2))
	{
		if ((*a)->order <= (int)(min_moy * 2))
		{
			push_b(a, b);
			i++;
			if ((*b)->order < (int)min_moy && (*a)->order > (int)(min_moy * 2))
				rotate_all(a, b);
			else if ((*b)->order < (int)min_moy)
				rotate_b(b);
		}
		else
			rotate_a(a);
	}
}

static void	put_last_part_in_b_2(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (((perimeter / 3) * 2) + ((perimeter / 3) / 3) * 2);
	while (circle_size(*b) < (size_t)i - 1 && circle_size(*a) > 3)
	{
		if ((*a)->order < i)
			push_b(a, b);
		else
			rotate_a(a);
	}
	while (circle_size(*a) > 3)
	{
		if ((*a)->order <= (int)perimeter - 3)
			push_b(a, b);
		else
			rotate_a(a);
	}
}

static void	put_last_part_in_b(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (((perimeter / 3) * 2) + ((perimeter / 3) / 3));
	while (circle_size(*b) < (size_t)i - 1)
	{
		if ((*a)->order < i)
		{
			push_b(a, b);
			rotate_b(b);
		}
		else
			rotate_a(a);
	}
	put_last_part_in_b_2(a, b, perimeter);
}

void	logic_for_100(t_circle **a, t_circle **b, size_t perimeter)
{
	put_in_order_in_b(a, b, perimeter);
	put_last_part_in_b(a, b, perimeter);
	if (!is_sort_or_not(*a))
		logic_for_3(a);
	while (!is_final_sort_or_not(*a))
	{
		if ((*a)->prev->order == (*a)->order - 1)
			rot_x(a, b, (*a)->order - 2, 1);
		else if ((*b)->order >= (*a)->order - 1)
			push_a(a, b);
		else
			rot_x(a, b, (*a)->order - 1, 0);
	}
}
