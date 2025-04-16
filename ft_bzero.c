/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:39:43 by britela-          #+#    #+#             */
/*   Updated: 2025/04/16 19:52:44 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (n != 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
/*
#include <stdio.h>
int	main()
{
	char mot[] = "Bradley";
	ft_bzero(mot, 3);

	int	i = 0;
	while(i != 7)
	{
		printf("%c",mot[i]); //c utilisé pour voir 
				     //contenue de l'indicde dans un char
		i++;
	}
	return (0);
}*/
