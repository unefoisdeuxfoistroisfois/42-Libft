/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:17:53 by britela-          #+#    #+#             */
/*   Updated: 2025/04/18 15:34:09 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				diff;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			diff = str1[i] - str2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*mot1;
	char	*mot2;
	int	res;

	mot1 = "Bradley";
	mot2 = "Braddley";
	res = ft_memcmp(mot1, mot2, 7);
	printf("%d", res);
	return (0);
}*/
