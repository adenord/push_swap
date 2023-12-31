/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_core.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:07:19 by adenord           #+#    #+#             */
/*   Updated: 2023/11/11 12:14:31 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	logic_core(t_circle **a, t_circle **b)
{
	size_t	perimeter;

	perimeter = circle_size(*a);
	if (is_final_sort_or_not(*a))
		return ;
	else if (perimeter == 2)
		rotate_a(a);
	else if (perimeter == 3)
		logic_for_3(a);
	else if (perimeter > 3 && perimeter < 7)
		logic_for_5(a, b, perimeter);
	else if (perimeter > 6 && perimeter < 200)
		logic_for_100(a, b, perimeter);
	else
		logic_for_500(a, b, perimeter);
}
