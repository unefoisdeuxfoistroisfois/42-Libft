/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:51:14 by britela-          #+#    #+#             */
/*   Updated: 2025/04/17 18:04:07 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*
int	main()
{
	char mot[7] = "Bradley";
	int	i;

	i = 0;
	while(mot[i] != '\0')
	{
		printf("%c",ft_toupper(mot[i]));
		i++;
	}
	return (0);
}*/
