/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:24:39 by britela-          #+#    #+#             */
/*   Updated: 2025/04/19 14:04:45 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	j = 0;
	while (src[j] != '\0' && j < size -1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
/*
int	main()
{
	char	*mot;
	char	mot2[7];
	int	taille = sizeof(mot2);
	int	res;

	mot = "Bradley";

	res = ft_strlcpy(mot2, mot, taille);
	printf("%d", res);
	//printf("%s", mot2);
	return(0);
}*/
