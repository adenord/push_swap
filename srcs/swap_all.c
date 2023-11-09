/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:27:27 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 16:51:27 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_all(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_swap(a);
		circle_swap(b);
		ft_printf("ss\n");
	}
}
