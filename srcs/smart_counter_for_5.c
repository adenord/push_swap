/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_counter_for_5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:31:38 by adenord           #+#    #+#             */
/*   Updated: 2023/11/11 10:52:11 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smart_rr_counter(t_circle **a, t_circle **b, size_t perimeter)
{
	int			ret;
	int			ord;
	int			m1;
	int			p1;
	t_circle	*current;

	ord = (*b)->order;
	ret = 0;
	m1 = ord - 1;
	p1 = ord + 1;
	if ((ord == 5 && perimeter == 5) || (ord == 6))
		p1 = 1;
	if (ord == 1 && perimeter == 5)
		m1 = 5;
	else if (ord == 1 && perimeter == 6)
		m1 = 6;
	current = *a;
	while ((current->order != p1) && (current->prev->order != m1))
	{
		current = current->next;
		ret++;
	}
	return (ret);
}

int	smart_rrr_counter(t_circle **a, t_circle **b, size_t perimeter)
{
	int			ret;
	int			ord;
	int			m1;
	int			p1;
	t_circle	*current;

	ord = (*b)->order;
	ret = 0;
	m1 = ord - 1;
	p1 = ord + 1;
	if ((ord == 5 && perimeter == 5) || (ord == 6))
		p1 = 1;
	if (ord == 1 && perimeter == 5)
		m1 = 5;
	else if (ord == 1 && perimeter == 6)
		m1 = 6;
	current = *a;
	while ((current->order != p1) && (current->prev->order != m1))
	{
		current = current->prev;
		ret++;
	}
	return (ret);
}
