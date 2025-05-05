/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:31:11 by britela-          #+#    #+#             */
/*   Updated: 2025/05/05 15:57:48 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
	{
		return ;
	}
	write(fd, &c, 1);
}
/*
int	main()
{
	int	fd;
	char	lettre;

	lettre = 'B';
	fd = open("new.txt", O_CREAT | O_WRONLY);
//normaleent tu dois mettre cette proteciton 
//tout le temps car imagine tu crée mais que tu n'as 
//pas le droit de le crée la ou tu es.
	if (fd < 0) 
	{
		return (-1);
	}
	
	ft_putchar_fd(lettre, fd);

	close(fd);
	return (0);
}*/
