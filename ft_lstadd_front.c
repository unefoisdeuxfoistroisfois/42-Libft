/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:58:48 by britela-          #+#    #+#             */
/*   Updated: 2025/04/30 18:42:36 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = *lst; // maillon pointe vers l'ancien  debut de liste
	*lst = new; // on met notre maillon au tete de liste;
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

	t_list *temp;

	temp = tete; //pointe vers premier elements de la liste
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);//acceder a la donnée du noeud
		temp = temp->next;
	}

	return (0);
}
