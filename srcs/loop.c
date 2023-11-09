/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:39 by adenord           #+#    #+#             */
/*   Updated: 2023/11/08 10:43:40 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_loop(t_circle **a, int loop_rr)
{
	while (loop_rr > 0)
	{
		rotate_a(a);
		loop_rr--;
	}
}

void	reverse_rotate_loop(t_circle **a, int loop_rrr)
{
	while (loop_rrr > 0)
	{
		reverse_rotate_a(a);
		loop_rrr--;
	}
}
