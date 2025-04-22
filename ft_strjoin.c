/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:59:09 by britela-          #+#    #+#             */
/*   Updated: 2025/04/22 16:37:17 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	sizeS1;
	int	sizeS2;
	char	*newWord;
	int	i;
	int	j;
	if(s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	sizeS1 = ft_strlen(s1);
	sizeS2 = ft_strlen(s2);

	newWord = malloc(sizeof(char) * (sizeS1 + sizeS2) +1);
	if (newWord == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		newWord[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j] != '\0')
	{
		newWord[i] = s2[j];
		i++;
		j++;
	}
	newWord[i] = '\0';
	return (newWord);
}

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
}
