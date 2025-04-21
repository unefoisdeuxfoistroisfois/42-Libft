/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:17:03 by britela-          #+#    #+#             */
/*   Updated: 2025/04/21 21:58:12 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newWord;
	int	sizeS;
	size_t	i;
	size_t	j;

	// si la chaine est vide
	if (s == NULL)
		return (NULL);

	sizeS = ft_strlen(s);

	if (start >= sizeS)
	{
		newWord = malloc(1);
		if(newWord != NULL)
			newWord[0] = '\0';
		return (newWord);
	}
	if(len > sizeS - start)
	{
		len = sizeS - start;
	}
	newWord = malloc(sizeof(char) * (len + 1));
	if (newWord == NULL)
		return (NULL);

	i = start;
	j = 0;
	while(j < len)
	{
		newWord[j] = s[i];
		j++;
		i++;
	}
	newWord[j]= '\0';

	return (newWord);
}

int	main()
{
	char	*mot;
	char	*res;

	mot = "Bradley";
	res = ft_substr(mot,3,3);
	printf("%s",res);
	return (0);
}
