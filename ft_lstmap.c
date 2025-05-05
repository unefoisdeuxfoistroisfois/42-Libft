/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:03:41 by britela-          #+#    #+#             */
/*   Updated: 2025/05/05 16:27:26 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void *ft_strtoupper(void *content)
{
	char	*str;
	char	*new;
	int		i;

	str = (char *)content;
	new = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!new)
		return (NULL);

	i = 0;
	while (str[i])
	{
		new[i] = ft_toupper(str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	ft_del_content(void *content)
{
	free(content);
}

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
	char	*mot1 = ft_strdup("Bradley");	
	char	*mot2 = ft_strdup("Ouss");
	char	*mot3 = ft_strdup("42");

	t_list *tete = NULL;
	t_list *copie;
	t_list *temp;

	ft_lstadd_front(&tete, ft_lstnew(mot1));
	ft_lstadd_front(&tete, ft_lstnew(mot2));
	ft_lstadd_front(&tete, ft_lstnew(mot3));

	// Liste originale
	printf("Liste originale :");
	temp = tete;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}

	// Liste copiée avec transformation
	copie = ft_lstmap(tete, ft_strtoupper, ft_del_content);
	printf("Liste mapée (majuscules) :\n");
	temp = copie;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&tete, ft_del_content);
	ft_lstclear(&copie, ft_del_content);

	return (0);
}*/
