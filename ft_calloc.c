/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:34:53 by britela-          #+#    #+#             */
/*   Updated: 2025/04/18 22:27:49 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	tab = malloc(count * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (count * size))
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	char	*res;

	res = ft_calloc(5,3);

	int	i;

	i =0;
	while(i < 15)
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}*/
