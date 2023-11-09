/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:20 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 16:52:42 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_all(t_circle **a, t_circle **b)
{
	if (*a && *b)
	{
		circle_first_next(a);
		circle_first_next(b);
		ft_printf("rr\n");
	}
}
