/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:32:53 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:33:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_all_bonus(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_swap(a);
		circle_swap(b);
	}
}
