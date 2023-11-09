/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:42:26 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 17:26:44 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_circle **a, t_circle **b)
{
	t_circle	*first;

	if (!(*b))
		return ;
	first = *b;
	circle_del_one(b, *b);
	circle_add_front(a, first);
	ft_printf("pa\n");
}
