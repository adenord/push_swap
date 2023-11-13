/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:23:20 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:24:31 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_bonus(t_circle **a, t_circle **b)
{
	t_circle	*first;

	if (!(*b))
		return ;
	first = *b;
	circle_del_one(b, *b);
	circle_add_front(a, first);
}
