/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_sorting_counter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:02:37 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 14:00:29 by adenord          ###   ########.fr       */
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

int	smart_index_rr(t_circle **circle, int index)
{
	int			i;
	t_circle	*current;

	i = 0;
	current = *circle;
	while ((current)->order != index && i < (int)circle_size(*circle))
	{
		current = (current)->next;
		i++;
	}
	return (i);
}

int	smart_index_rrr(t_circle **circle, int index)
{
	int	i;
	t_circle	*current;

	i = 0;
	current = *circle;
	while (((current)->order != index) && i < (int)circle_size(*circle))
	{
		current = (current)->prev;
		i++;
	}
	return (i);
}
