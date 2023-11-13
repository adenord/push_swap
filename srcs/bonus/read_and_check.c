/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:17:28 by adenord           #+#    #+#             */
/*   Updated: 2023/11/13 11:11:21 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parser(char *instr, t_circle **a, t_circle **b)
{
	if (!ft_strcmp(instr, "ra\n"))
		rotate_x_bonus(a);
	else if (!ft_strcmp(instr, "rb\n"))
		rotate_x_bonus(b);
	else if (!ft_strcmp(instr, "rr\n"))
		rotate_all_bonus(a, b);
	else if (!ft_strcmp(instr, "ss\n"))
		swap_all_bonus(a, b);
	else if (!ft_strcmp(instr, "sa\n"))
		swap_x_bonus(a);
	else if (!ft_strcmp(instr, "sb\n"))
		swap_x_bonus(b);
	else if (!ft_strcmp(instr, "rra\n"))
		reverse_rotate_x_bonus(a);
	else if (!ft_strcmp(instr, "rrb\n"))
		reverse_rotate_x_bonus(b);
	else if (!ft_strcmp(instr, "rrr\n"))
		reverse_rotate_all_bonus(a, b);
	else if (!ft_strcmp(instr, "pa\n"))
		push_a_bonus(a, b);
	else if (!ft_strcmp(instr, "pb\n"))
		push_b_bonus(a, b);
	else
		return (0);
	return (1);
}

int	read_and_check(t_circle **a, t_circle **b)
{
	char	*str;
	size_t	size;

	size = circle_size(*a);
	str = get_next_line(0);
	while (str != NULL)
	{
		if (str)
		{
			if (!parser(str, a, b))
			{
				free(str);
				return (error());
			}
			free(str);
		}
		str = get_next_line(0);
	}
	if (is_final_sort_or_not(*a) && circle_size(*a) == size)
		return (1);
	else
		return (0);
}
