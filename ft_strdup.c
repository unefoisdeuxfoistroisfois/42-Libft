/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:52:40 by britela-          #+#    #+#             */
/*   Updated: 2025/04/19 15:03:04 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		j;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (s[j] != '\0')
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main()
{
	char	*mot;
	char	*res;

	mot = "BRADLEY";
	res = ft_strdup(mot);

	printf("%s", res);
	return (0);
}*/
