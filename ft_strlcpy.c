/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:24:39 by britela-          #+#    #+#             */
/*   Updated: 2025/04/16 20:28:44 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	i = 0;
	while(src[i])
	{
		i++;
	}

	return (i);
}

int	main()
{
	return(0);
}
