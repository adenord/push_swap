/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_for_4_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:13:00 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 08:34:03 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	final_sorting(t_circle **a, int loop_rr, int loop_rrr)
{
	loop_rr = smart_s_rr_counter(a);
	loop_rrr = smart_s_rrr_counter(a);
	if (loop_rr <= loop_rrr)
		rotate_loop(a, loop_rr, 0); 
	else
		reverse_rotate_loop(a, loop_rrr, 0);
}

void	logic_for_4_5(t_circle **a, t_circle **b, size_t perimeter)
{
	int	loop_rr;
	int	loop_rrr;

	push_b(a, b);
	if (perimeter == 5)
		push_b(a, b);
	if (!is_sort_or_not(*a))
		logic_for_3(a);
	while (circle_size(*a) < perimeter)
	{
		loop_rr = smart_rr_counter(a, b);
		loop_rrr = smart_rrr_counter(a, b);
		if (loop_rr <= loop_rrr)
			rotate_loop(a, loop_rr, 0); 
		else
			reverse_rotate_loop(a, loop_rrr, 0);
		push_a(a, b);
	}
	final_sorting(a, loop_rr, loop_rrr);
}
