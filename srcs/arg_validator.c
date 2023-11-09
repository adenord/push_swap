/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:47:18 by adenord           #+#    #+#             */
/*   Updated: 2023/11/04 18:30:07 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_validator(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc == 1)
		return (0);
	while (j < argc)
	{
		i = 0;
		if (argv[j][0] == '-' || argv[j][0] == '+')
			i++;
		while (argv[j][i])
		{
			if (!ft_isdigit(argv[j][i]))
				return (error());
			i++;
		}
		j++;
	}
	return (1);
}
