/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:53:29 by britela-          #+#    #+#             */
/*   Updated: 2025/04/14 17:27:42 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	char	*mot;
	int	i;

	mot = "423";
	i = 0;
	while(mot[i] != '\0')
	{
		if(ft_isdigit(mot[i]) == 0)
		{
			printf("erreur");
			return 0;
		}
		i++;
	}
	printf("ok");
	return 0;
}*/
