/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:49:56 by britela-          #+#    #+#             */
/*   Updated: 2025/04/19 13:58:42 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	fullsize;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size <= i)
	{
		fullsize = size + j;
		return (fullsize);
	}
	fullsize = i + j;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (fullsize);
}
/*
int	main()
{
	char mot[20] = "bradley";
	char	*mot1;
	int	taille = sizeof(mot);
	size_t	res;

	mot1 = "estiga la";

	res = ft_strlcat(mot, mot1, taille);
	printf("%zu",res);
	return (0);
}*/
