/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:07:30 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 17:58:27 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	list_a_and_b(int lena, int lenb, t_circle **a, t_circle **b)
{
	int	x;
	int	i;

	if (lena > lenb)
		i = lena;
	else
		i = lenb;
	x = -1;
	while (++x < i)
	{
		if ((*a) && x < lena)
		{
			ft_printf("|%9d|%9d|", (*a)->value, (*a)->order);
			(*a) = (*a)->next;
		}
		else
			ft_printf("|%9s|%9s|", "", "");
		if ((*b) && x < lenb)
		{
			ft_printf("%9d|%9d|\n", (*b)->value, (*b)->order);
			(*b) = (*b)->next;
		}
		else
			ft_printf("%9s|%9s|\n", "", "");
	}
}

void	circle_display(t_circle **a, t_circle **b)
{
	int		lena;
	int		lenb;

	lena = circle_size(*a);
	lenb = circle_size(*b);
	ft_printf("|---------|---------|---------|---------|\n");
	ft_printf("|         a         |         b         |\n");
	ft_printf("|---------|---------|---------|---------|\n");
	ft_printf("|--value--|--order--|--value--|--order--|\n");
	ft_printf("|---------|---------|---------|---------|\n");
	list_a_and_b(lena, lenb, a, b);
	ft_printf("|---------|---------|---------|---------|\n");
}
