/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:05:08 by britela-          #+#    #+#             */
/*   Updated: 2025/04/17 18:11:40 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 91)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
/*
int	main()
{
	char	mot[] = "BRADLEY";
	int	i;

	i = 0;
	while(mot[i] != '\0')
	{
		printf("%c", ft_tolower(mot[i]));
		i++;
	}
	return (0);
}*/
