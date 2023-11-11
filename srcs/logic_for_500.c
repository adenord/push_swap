/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_for_500.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:06:23 by adenord           #+#    #+#             */
/*   Updated: 2023/11/11 16:17:10 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	logic_for_500(t_circle **a, t_circle **b, size_t perimeter)
{
	put_in_b(a, b, perimeter);
	put_last_in_b(a, b, perimeter);
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
		// circle_display(a, b);
	}
}
