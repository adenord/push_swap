/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rr_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:31:38 by adenord           #+#    #+#             */
/*   Updated: 2023/11/09 19:57:15 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smart_rr_counter(t_circle **a, t_circle **b)
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
	if (ord == 5)
		p1 = 1;
	if (ord == 1)
		m1 = 5;
	current = *a;
	while ((current->order != p1) && (current->prev->order != m1))
	{
		current = current->next;
		ret++;
	}
	return (ret);
}

int	smart_rrr_counter(t_circle **a, t_circle **b)
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
	if (ord == 5)
		p1 = 1;
	if (ord == 1)
		m1 = 5;
	current = *a;
	while ((current->order != p1) && (current->prev->order != m1))
	{
		current = current->prev;
		ret++;
	}
	return (ret);
}
