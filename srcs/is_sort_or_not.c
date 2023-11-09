/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort_or_not.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:52:56 by adenord           #+#    #+#             */
/*   Updated: 2023/11/08 11:43:39 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort_or_not(t_circle *a)
{
	if (a->order < a->next->order && a->next->order < a->next->next->order)
		return (1);
	else
		return (0);
}

int	is_final_sort_or_not(t_circle *a)
{
	size_t	perimeter;
	size_t	i;

	i = 0;
	perimeter = circle_size(a);
	while (i < perimeter)
	{
		if ((size_t)a->order != i + 1)
			return (0);
		a = a->next;
		i++;
	}
	return (1);
}
