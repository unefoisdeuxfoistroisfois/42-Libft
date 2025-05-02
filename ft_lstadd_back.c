/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:24:29 by britela-          #+#    #+#             */
/*   Updated: 2025/05/02 15:02:52 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new; //cas ou la liste existe mais est vide donc on lui donne new
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

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

	ft_lstadd_back(&tete, resultats1);
	ft_lstadd_back(&tete, resultats2);
	ft_lstadd_back(&tete, resultats3);

	t_list *temp;

	temp = tete; //pointe vers premier elements de la liste
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);//acceder a la donnée du noeud
		temp = temp->next;
	}

	return (0);
}
