/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rrr_counter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:44:24 by adenord           #+#    #+#             */
/*   Updated: 2023/11/08 09:46:48 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	stay_original(t_circle **a, int loop)
{
	while (loop > 0)
	{
		circle_first_next(a);
		loop--;
	}
}

int	smart_rrr_counter(t_circle **a, t_circle **b)
{
	int	ret;
	int	ord;
	int	m1;
	int	p1;

	ord = (*b)->order;
	ret = 0;
	m1 = ord - 1;
	p1 = ord + 1;
	if (ord == 5)
		p1 = 1;
	if (ord == 1)
		m1 = 5;
	while (((*a)->order != p1) && ((*a)->prev->order != m1))
	{
		circle_first_prev(a);
		ret++;
	}
	stay_original(a, ret);
	return (ret);
}
