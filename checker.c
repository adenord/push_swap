/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:04:01 by adenord           #+#    #+#             */
/*   Updated: 2023/11/12 16:55:35 by adenord          ###   ########.fr       */
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
	if (read_and_check(&c_a, &c_b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	clear_mess(&c_a, &c_b);
}
