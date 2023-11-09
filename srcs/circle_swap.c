/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:12:53 by adenord           #+#    #+#             */
/*   Updated: 2023/11/03 18:39:43 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	circle_swap(t_circle **first)
{
	t_circle	*tmp;

	tmp = (*first)->next;
	(*first)->next = tmp->next;
	tmp->next->prev = *first;
	circle_add_front(first, tmp);
}
