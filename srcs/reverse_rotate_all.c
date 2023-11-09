/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:40:56 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 16:53:35 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_all(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_first_prev(a);
		circle_first_prev(b);
		ft_printf("rrr\n");
	}
}
