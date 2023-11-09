/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_sorting_counter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:02:37 by adenord           #+#    #+#             */
/*   Updated: 2023/11/08 11:11:15 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stay_original_rr(t_circle **a, int loop)
{
	while (loop > 0)
	{
		circle_first_prev(a);
		loop--;
	}
}

int	smart_s_rr_counter(t_circle **a)
{
	int	ret;

	ret = 0;
	while ((*a)->order != 1)
	{
		circle_first_next(a);
		ret++;
	}
	stay_original_rr(a, ret);
	return (ret);
}

static void	stay_original_rrr(t_circle **a, int loop)
{
	while (loop > 0)
	{
		circle_first_next(a);
		loop--;
	}
}

int	smart_s_rrr_counter(t_circle **a)
{
	int	ret;

	ret = 0;
	while ((*a)->order != 1)
	{
		circle_first_prev(a);
		ret++;
	}
	stay_original_rrr(a, ret);
	return (ret);
}
