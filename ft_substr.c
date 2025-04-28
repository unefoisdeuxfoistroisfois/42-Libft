/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:17:03 by britela-          #+#    #+#             */
/*   Updated: 2025/04/27 23:51:46 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_empty(void)
{
	char	*newword;

	newword = malloc(1);
	if (newword != NULL)
		newword[0] = '\0';
	return (newword);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newword;
	unsigned int	sizes;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	sizes = ft_strlen(s);
	if (start >= sizes)
		return (ft_empty());
	if (len > sizes - start)
		len = sizes - start;
	newword = malloc(sizeof(char) * (len + 1));
	if (newword == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
	{
		newword[j] = s[i];
		j++;
		i++;
	}
	newword[j] = '\0';
	return (newword);
}
/*
int	main()
{
	char	*mot;
	char	*res;

	mot = "Bradley";
	res = ft_substr(mot,3,3);
	printf("%s",res);
	return (0);
}*/
