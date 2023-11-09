/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:14:57 by adenord           #+#    #+#             */
/*   Updated: 2023/11/02 08:25:18 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_circle	*circle_new(int value)
{
	t_circle	*circle;

	circle = (t_circle *)ft_calloc(1, sizeof(t_circle));
	if (!circle)
		return (NULL);
	circle->next = circle;
	circle->prev = circle;
	circle->value = value;
	circle->order = 0;
	return (circle);
}
