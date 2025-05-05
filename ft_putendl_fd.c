/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:15:22 by britela-          #+#    #+#             */
/*   Updated: 2025/05/05 16:15:59 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
/*
int	main()
{
	char	*mot;
	int	fd;

	mot = "Bradley";
	fd = open("newputendl.txt", O_CREAT | O_WRONLY);
	if (fd < 0)
	{
		return (-1);
	}

	ft_putendl_fd(mot, fd);
	close(fd);
	return (0);
}*/
