/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:33 by britela-          #+#    #+#             */
/*   Updated: 2025/04/16 11:54:41 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	unsigned char		*src2;
	size_t	i;

	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	while (n != 0)
	{
		dest2[i] = src2[i];
		i++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	mot[] = "Bradley";
	char	mot2[] = "DemainC'est jeudi";

	ft_memcpy(mot2, mot, 5);
	printf("%s",mot2);
	return (0);
}*/
