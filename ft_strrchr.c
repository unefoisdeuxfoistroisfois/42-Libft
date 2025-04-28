/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:27:47 by britela-          #+#    #+#             */
/*   Updated: 2025/04/28 01:12:29 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;
	int		sizecompl;

	cc = (char)c;
	sizecompl = 0;
	while (s[sizecompl] != '\0')
	{
		sizecompl++;
	}
	i = sizecompl;
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char *mot;
	char	lettre;
	char	*res;

	mot = "Bradley";
	lettre = 'd';

	res = ft_strrchr(mot, lettre);
	printf("%s", res);
	return (0);

}*/
