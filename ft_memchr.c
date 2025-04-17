/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:29:24 by britela-          #+#    #+#             */
/*   Updated: 2025/04/17 21:36:37 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memechr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (s[i] == c)
			{
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	return (0);
}
