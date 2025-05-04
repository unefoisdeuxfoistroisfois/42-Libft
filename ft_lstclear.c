/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:05:37 by britela-          #+#    #+#             */
/*   Updated: 2025/05/04 16:07:49 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;	

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
	*lst = NULL;
}
/*
void	ft_del_content(void *content)
{
	free(content);
}

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

	mot1 = ft_strdup("Bradley");	
	mot2 = ft_strdup("Ouss");
	mot3 = ft_strdup("42");
	
	t_list *tete = NULL;

	t_list *resultats1 = ft_lstnew(mot1);
	t_list *resultats2 = ft_lstnew(mot2);
	t_list *resultats3 = ft_lstnew(mot3);

	ft_lstadd_front(&tete, resultats1);
	ft_lstadd_front(&tete, resultats2);
	ft_lstadd_front(&tete, resultats3);
	
	ft_lstclear(&tete, ft_del_content);

	t_list	*temp;

	temp = tete;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	
	return (0);
}*/
