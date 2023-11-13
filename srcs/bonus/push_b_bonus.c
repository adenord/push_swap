/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:24:37 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:25:10 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b_bonus(t_circle **a, t_circle **b)
{
	t_circle	*first;

	if (!(*a))
		return ;
	first = *a;
	circle_del_one(a, *a);
	circle_add_front(b, first);
}
