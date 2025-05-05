/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 01:20:13 by britela-          #+#    #+#             */
/*   Updated: 2025/05/05 16:49:30 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}

	node->content = content;
	node->next = NULL;
	
	return node;
}

int	main()
{
	char	*mot1;
	char	*mot2;
	char	*mot3;

	mot1 = "Bradley";	
	mot2 = "Ouss";
	mot3 = "42";
	
	t_list *tete = NULL;

	t_list *resultats1 = ft_lstnew(mot1);
	t_list *resultats2 = ft_lstnew(mot2);
	t_list *resultats3 = ft_lstnew(mot3);

	ft_lstadd_front(&tete, resultats1);
	ft_lstadd_front(&tete, resultats2);
	ft_lstadd_front(&tete, resultats3);


	t_list *resultats = ft_lstlast(tete);

    	printf("%s\n", (char *)resultats->content);
}*/
