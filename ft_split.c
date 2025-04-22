/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:02:24 by britela-          #+#    #+#             */
/*   Updated: 2025/04/22 22:22:11 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	*newWord;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] != c)
		{
			i++;	
		}
	}
	newword = malloc(size(char) * (i) + 1);
	if(newword == NULL)
	{
		return (NULL);
	}

	j = 0;
	while(i )
	{
		i++;
	}
}
int	main()
{
	char	*mot;
	char	sep;
	char	**res;

	mot = "Br.ad.l.ey";
	sep = '.';
	res = ft_split();

	free(res);
	return (0);
}
