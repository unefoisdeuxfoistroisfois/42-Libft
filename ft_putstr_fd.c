/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:29:40 by britela-          #+#    #+#             */
/*   Updated: 2025/05/05 16:05:18 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL || fd < 0)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main()
{
	int	fd;
	char	*mot;

	mot = "Bradley";
	fd = open("new.txt", O_CREAT | O_WRONLY);

	if (fd < 0)
	{
		return (-1);
	}

	ft_putstr_fd(mot, fd);

	close (fd);
	return (0);
}*/
