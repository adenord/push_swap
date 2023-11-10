/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:39 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 08:31:45 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_loop(t_circle **a, int loop_rr, int flag)
{
	while (loop_rr > 0)
	{
		if (flag == 0)
			rotate_a(a);
		else
			rotate_b(a);
		loop_rr--;
	}
}

void	reverse_rotate_loop(t_circle **a, int loop_rrr, int flag)
{
	while (loop_rrr > 0)
	{
		if (flag == 0)
			reverse_rotate_a(a);
		else
			reverse_rotate_b(a);
		loop_rrr--;
	}
}
