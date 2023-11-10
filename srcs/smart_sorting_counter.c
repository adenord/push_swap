/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_sorting_counter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:02:37 by adenord           #+#    #+#             */
/*   Updated: 2023/11/09 20:38:18 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smart_s_rr_counter(t_circle **a)
{
	int			ret;
	t_circle	*current;

	ret = 0;
	current = *a;
	while (current->order != 1)
	{
		current = current->next;
		ret++;
	}
	return (ret);
}

int	smart_s_rrr_counter(t_circle **a)
{
	int			ret;
	t_circle	*current;

	ret = 0;
	current = *a;
	while (current->order != 1)
	{
		current = current->prev;
		ret++;
	}
	return (ret);
}
