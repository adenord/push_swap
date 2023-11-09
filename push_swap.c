/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:36:45 by adenord           #+#    #+#             */
/*   Updated: 2023/11/09 14:58:13 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_circle *c_a;
	t_circle *c_b;
	
	if (!arg_validator(argc, argv))
		return (0);
	c_a = kreator(argc, argv);
	c_b = NULL;
	if (!c_a || !no_duplicates(&c_a))
		return (error());
	indexer(&c_a, circle_size(c_a));
	circle_display(&c_a, &c_b);
	logic_core(&c_a, &c_b);
	if (is_sort_or_not(c_a))
		circle_display(&c_a, &c_b);
	// circle_display(&c_a, &c_b);
	clear_mess(&c_a, &c_b);
}
