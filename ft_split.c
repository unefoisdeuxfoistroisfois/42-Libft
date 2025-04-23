/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:02:24 by britela-          #+#    #+#             */
/*   Updated: 2025/04/23 17:46:47 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		if(s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count++;
		}
		i++;
	}

	return (count);
}

char	**ft_split(char	const *s, char c)
{
	char	**newword;

	if (s == NULL)
	{
		return (NULL)
	}

	newword = malloc(sizeof(char) * (countword(s,c)) + 1);
	if (newword == NULL)
	{
		return (NULL);
	}
}
int	main()
{
	char	*mot;
	char	sep;
	int	res;

	mot = "Br.ad.l.ey";
	sep = '.';
	res = countword(mot, sep);
	printf("%d",res);

	return (0);
}
