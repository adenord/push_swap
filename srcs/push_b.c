/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:51:33 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 17:27:00 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_circle **a, t_circle **b)
{
	t_circle	*first;

	if (!(*a))
		return ;
	first = *a;
	circle_del_one(a, *a);
	circle_add_front(b, first);
	ft_printf("pb\n");
}
