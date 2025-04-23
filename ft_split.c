/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:02:24 by britela-          #+#    #+#             */
/*   Updated: 2025/04/23 23:43:11 by britela-         ###   ########.fr       */
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

char	*ft_strdup_range(const char *s, int start, int end)
{
	int		i;
	char	*res;

	res = malloc((end - start + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char	const *s, char c)
{
	int	i;
	int	j;
	int	start;
	char	**newword;

	if (s == NULL)
	{
		return (NULL);
	}

	newword = malloc(sizeof(char *) * (countword(s,c) + 1));
	if (newword == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			newword[j] = ft_strdup_range(s, start, i + 1);
			j++;
		}
		i++;
	}
	newword[j] = NULL;
	return (newword);
}
int	main()
{
	char	*mot;
	char	sep;
	char	**res;
	int	i;
	mot = "Br.ad.l.ey";
	sep = '.';
	res = ft_split(mot, sep);
	
	i = 0;
	while (res[i] != NULL)
	{
		printf("mot[%d] = %s\n", i, res[i]);
		i++;
	}

	return (0);
}
