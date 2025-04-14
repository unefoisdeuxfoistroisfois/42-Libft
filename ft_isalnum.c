/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:46 by britela-          #+#    #+#             */
/*   Updated: 2025/04/14 17:11:25 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

int	main()
{
	char *mot;
	int	i;

	mot = "Bradley123452154";
	i = 0;
	while(mot[i] != '\0')
	{
		if(ft_isalnum(mot[i]) == 0)
		{
			printf("erreur");
			return (0);
		}
		i++;
	}
	printf("ok");
	return (0);
}
