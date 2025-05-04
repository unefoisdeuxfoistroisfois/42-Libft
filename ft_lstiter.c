/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:26:23 by britela-          #+#    #+#             */
/*   Updated: 2025/05/04 18:00:43 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
	{
		return ;
	}
	else
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void	ft_top(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
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
	
	ft_lstiter(tete, ft_top);

	t_list	*temp;

	temp = tete;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	
	return (0);
}*/
