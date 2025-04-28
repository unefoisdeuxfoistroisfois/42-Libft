/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:01:18 by britela-          #+#    #+#             */
/*   Updated: 2025/04/28 00:17:44 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
	char *mot;
	char *mot1;
	int taille;
	int res;

	mot = "Bradley";
	mot1 = "B radley";
	taille = 2;

	res = ft_strncmp(mot, mot1, taille);

	if (res > 0)
	{
		printf("%d", res);
	}
	else if(res == 0)
	{
		printf("%d", res);
	}
	else if(res < 0)
	{
		printf("%d", res);
	}

	return 0;
}*/
