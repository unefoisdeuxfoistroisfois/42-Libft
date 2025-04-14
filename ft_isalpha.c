/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:13:46 by britela-          #+#    #+#             */
/*   Updated: 2025/04/14 17:26:07 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || c >= 97 && c <= 122)
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

	mot = "Bradley";
	i = 0;
	while(mot[i] != '\0')
	{
		if(ft_isalpha(mot[i]) == 0)
			printf("erreur\n");
		i++;
	}
	printf("ok");
}*/
