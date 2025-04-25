/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:08:30 by britela-          #+#    #+#             */
/*   Updated: 2025/04/25 17:54:31 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL && f == NULL)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_pointeurfonction(unsigned int i, char *c)
{
	char	maj;

	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
	{
		maj = *c - 32;
	}
	else
	{
		maj = *c;
	}
	write(1,&maj,1);
}

int	main()
{
	char	*mot;

	mot = "Bradley";
	ft_striteri(mot, &ft_pointeurfonction);
	return (0);
}*/
