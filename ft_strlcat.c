/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:49:56 by britela-          #+#    #+#             */
/*   Updated: 2025/04/17 17:42:54 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sizecompl;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0')
	{
		j++;
	}
	if(i == size)
	{
		sizecompl = i + j;
		return (sizecompl);
	}
	sizecompl = i + j;
	i = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (sizecompl);
}
int	main()
{
	char mot[] = "bradley";
	char	*mot1;
	int	taille;
	int	res;

	mot1 = "est la";
	taille = 5;

	res = ft_strlcat(mot, mot1, taille);
	printf("%d",res);
	return (0);
}
