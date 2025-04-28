/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:43:22 by britela-          #+#    #+#             */
/*   Updated: 2025/04/28 22:41:42 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newword;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && checkset(set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > i && checkset(set, s1[j] - 1) == 1)
		j--;
	newword = malloc(sizeof(char) * (j - i + 1));
	if (newword == NULL)
		return (NULL);
	k = 0;
	while (i != j)
	{
		newword[k] = s1[i];
		i++;
		k++;
	}
	newword[k] = '\0';
	return (newword);
}
/*
int main()
{
	char	*mot1;
	char	*mot2;
	char	*res;

	mot1 = "...Bradley...";
	mot2 = "...";
	res = ft_strtrim(mot1,mot2);

	printf("%s", res);
	free(res);
	return (0);
}*/
