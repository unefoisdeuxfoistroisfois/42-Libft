/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:21:56 by britela-          #+#    #+#             */
/*   Updated: 2025/05/04 18:39:57 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main()
{
	char	*mot;

	t_list	*resultats;

	mot = "Bradley";
	resultats = ft_lstnew(mot);
	if (resultats != NULL) //si il y'a qq chose dedans 
	{
		printf("OK %s", (char *)resultats->content);
	}
	else
	{
		printf("ciao");
	}
	return (0);
}*/
