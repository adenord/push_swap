/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:03:14 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 14:13:22 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	circle_size(t_circle *circle)
{
	size_t		i;
	t_circle	*first;

	first = circle;
	i = 0;
	if (!circle)
		return (0);
	while (circle->next != first)
	{
		i++;
		circle = circle->next;
	}
	i++;
	return (i);
}
