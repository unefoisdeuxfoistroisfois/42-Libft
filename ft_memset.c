/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:36:23 by britela-          #+#    #+#             */
/*   Updated: 2025/04/16 10:38:45 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n != 0)
	{
		str[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	char	mot[] = "Bradley";//pas de char *mot (pointeur) car pas modifiable

	ft_memset(mot, '-', 5);
	printf("%s", mot);
	return (0);
}*/
