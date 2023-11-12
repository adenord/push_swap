/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:36:45 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 14:05:50 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_circle	*c_a;
	t_circle	*c_b;

	if (!arg_validator(argc, argv))
		return (0);
	c_a = kreator(argc, argv);
	c_b = NULL;
	if (!c_a || !no_duplicates(&c_a))
		return (error());
	indexer(&c_a, circle_size(c_a));
	logic_core(&c_a, &c_b);
	clear_mess(&c_a, &c_b);
}
