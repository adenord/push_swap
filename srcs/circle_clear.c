/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:01:20 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 14:15:12 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	circle_clear(t_circle **circle)
{
	t_circle	*current;

	if (*circle)
	{
		(*circle)->prev->next = NULL;
		current = *circle;
		while (*circle)
		{
			current = (*circle)->next;
			free(*circle);
			*circle = current;
		}
		circle = NULL;
	}
}
