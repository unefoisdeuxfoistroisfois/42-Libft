/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:32:23 by britela-          #+#    #+#             */
/*   Updated: 2025/04/28 00:29:11 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (src == NULL && dest == NULL)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest2 < src2)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n != 0)
		{
			n--;
			dest2[n] = src2[n];
		}
	}
	return (dest);
}
/*
int	main()
{
	//char	mot[] = "Salut";
	//char	mot2[] = "Bradley";
	char	mot[] = "SalutBradley";

	// chevauchemetn ? quand une chaine se partage la meme memoire 
	ft_memmove(mot+2, mot, 5);
	return (0);
}*/
