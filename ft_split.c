/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:52:46 by britela-          #+#    #+#             */
/*   Updated: 2025/05/06 01:54:26 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_tab(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*add_str(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**create_str(char **str, char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	*temp;

	i = 0;
	j = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0') && start != -1)
		{
			temp = add_str(s + start, c);
			if (temp == NULL)
				return (free_tab(str, j), NULL);
			str[j] = temp;
			start = -1;
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char	const *s, char c)
{
	char	**newword;

	if (s == NULL)
		return (NULL);
	newword = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (newword == NULL)
		return (NULL);
	if (create_str(newword, s, c) == NULL)
		return (NULL);
	return (newword);
}
/*
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

	free_tab(res, i);
	return (0);
}*/
