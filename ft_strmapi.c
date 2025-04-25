/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:58:17 by britela-          #+#    #+#             */
/*   Updated: 2025/04/25 16:51:46 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}	
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';

	return (str);
}
/*
char	minmaj(unsigned int i, char c)
{
	char	maj;
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
	{
		maj = c - 32;
		return (maj);
	}
	return (c);
}
int main()
{
	char	*mot;
	char	*res;

	mot = "Bradley";
	res = ft_strmapi(mot, &minmaj);
	printf("%s", res);
	free(res); // avoir l'habitude de free toujours arpres malloc
	return (0);
}*/
