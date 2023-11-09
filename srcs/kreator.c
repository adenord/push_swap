/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kreator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:33:17 by adenord           #+#    #+#             */
/*   Updated: 2023/11/05 18:22:56 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_circle	*kreator(int argc, char **argv)
{
	t_circle	*circle;
	int			i;
	long		tmp;

	i = 1;
	tmp = 0;
	circle = NULL;
	while (i < argc)
	{
		tmp = ft_atol(argv[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
		{
			circle_clear(&circle);
			return (NULL);
		}
		circle_add_back(&circle, circle_new(tmp));
		i++;
	}
	return (circle);
}
