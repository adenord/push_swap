/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_all_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:27:42 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:34:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_all_bonus(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_first_prev(a);
		circle_first_prev(b);
	}
}
