/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:24:55 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 16:48:41 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	no_duplicates(t_circle **circle)
{
	int			i;
	int			y;
	int			z;
	t_circle	*current;
	t_circle	*second;

	i = circle_size(*circle);
	y = -1;
	current = *circle;
	while (++y < i)
	{
		z = y;
		second = current->next;
		while (++z < i)
		{
			if (second->value == current->value)
			{
				circle_clear(circle);
				return (0);
			}
			second = second->next;
		}
		current = current->next;
	}
	return (1);
}
