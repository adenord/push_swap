/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:42:14 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:41:11 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ***************************** */
/*                               */
/*  scan memory for a character  */
/*                               */
/* ***************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(char *)s == (char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
