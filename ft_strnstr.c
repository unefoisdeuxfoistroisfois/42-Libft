/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:31:29 by britela-          #+#    #+#             */
/*   Updated: 2025/04/18 19:53:38 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	j;

	str1 = (char *)big;
	str2 = (char *)little;
	i = 0;
	if (str2[0] == '\0')
		return (str1);
	while (i < len && str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			while (str2[j] != '\0' && str1[i + j] == str2[j] && (i + j) < len)
			{
				j++;
			}
			if (str2[j] == '\0')
				return (&str1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*mot1;
	char	*mot2;
	int	taille;
	char	*res;

	mot1 = "salut bradley";
	mot2 = "brad";

	taille = 20;
	res = ft_strnstr(mot1, mot2, taille);

	printf("%s", res);
	return (0);
}*/
