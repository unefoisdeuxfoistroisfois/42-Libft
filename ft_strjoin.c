/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:59:09 by britela-          #+#    #+#             */
/*   Updated: 2025/04/27 23:08:02 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newword;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newword = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (newword == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newword[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newword[i] = s2[j];
		i++;
		j++;
	}
	newword[i] = '\0';
	return (newword);
}
/*
int	main()
{
	char	*mot1;
	char	*mot2;
	char	*res;

	mot1 = "Bradley";
	mot2 = "est la";
	res = ft_strjoin(mot1,mot2);
	printf("%s", res);

	free(res);
	return (0);
}*/
