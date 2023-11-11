/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:45:44 by adenord           #+#    #+#             */
/*   Updated: 2023/11/11 16:15:43 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_in_b_3(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (perimeter / 7) * 6;
	while (circle_size(*b) < (size_t)i)
	{
		if ((*a)->order <= i)
		{
			push_b(a, b);
			if ((*b)->order <= ((i / 4) + i / 6) && (*a)->order > i)
				rotate_all(a, b);
			else if ((*b)->order < ((i / 4) + i / 6))
				rotate_b(b);
		}
		else
			rotate_a(a);
	}
}

static void	put_in_b_2(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (perimeter / 7) * 4;
	while (circle_size(*b) < (size_t)i)
	{
		if ((*a)->order <= i)
		{
			push_b(a, b);
			if ((*b)->order <= ((i / 2) + i / 4) && (*a)->order > i)
				rotate_all(a, b);
			else if ((*b)->order < ((i / 2) + i / 4))
				rotate_b(b);
		}
		else
			rotate_a(a);
	}
	put_in_b_3(a, b, perimeter);
}

void	put_in_b(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (perimeter / 7) * 2;
	while (circle_size(*b) < (size_t)i)
	{
		if ((*a)->order <= i)
		{
			push_b(a, b);
			if ((*b)->order <= i / 2 && (*a)->order > i)
				rotate_all(a, b);
			else if ((*b)->order < i / 2)
				rotate_b(b);
		}
		else
			rotate_a(a);
	}
	put_in_b_2(a, b, perimeter);
}

static void	put_last_in_b_2(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (((perimeter / 7) * 6) + ((perimeter / 7) / 3) * 2);
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

void	put_last_in_b(t_circle **a, t_circle **b, size_t perimeter)
{
	int	i;

	i = (((perimeter / 7) * 6) + ((perimeter / 7) / 3));
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
	put_last_in_b_2(a, b, perimeter);
}
