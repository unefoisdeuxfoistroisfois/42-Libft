/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:43:34 by britela-          #+#    #+#             */
/*   Updated: 2025/04/24 18:19:48 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long n)
{
	int	count = 0;

	if (n <= 0)
	{
		count++;
	}

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	char	*str;
	int	count;
	long	nb;
	int	i;

	i = 0;
	nb = n;
	count = ft_count(n);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	str[count] = '\0';
	if (nb == 0)
	{
		str[i] = '0';
		return (str);
	}
	else if (nb < 0)
	{
		str[i] = '-';
		nb = -nb;
	}

	i = count - 1;
	while (nb != 0)
	{
		str[i] = nb % 10 + 48; //convertion du dernier chiffre en char
		nb = nb / 10; //decalement
		i--;
	}
	
	return (str);
}

int	main()
{
	int	nombre;
	char	*res;

	nombre = 2147483647;
	res = ft_itoa(nombre);
	printf("%s", res);
	return (0);
}
