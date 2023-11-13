/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_all_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:30:13 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:30:47 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_all_bonus(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_first_next(a);
		circle_first_next(b);
	}
}
