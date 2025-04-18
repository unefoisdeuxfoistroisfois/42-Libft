/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:32:23 by britela-          #+#    #+#             */
/*   Updated: 2025/04/18 16:46:06 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			i;

	if (src == NULL && dest == NULL)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (n != 0)
		{
			dest2[i] = src2[i];
			i++;
			n--;
		}
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
