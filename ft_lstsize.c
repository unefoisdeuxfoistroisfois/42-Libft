/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:51:35 by britela-          #+#    #+#             */
/*   Updated: 2025/05/02 00:07:55 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	char	*mot;
	char	*mot2;
	char	*mot3;

	mot = "Bradley";
	mot2 = "Ouss";
	mot3 = "42";

	t_list *res1 = ft_lstnew(mot);
	t_list *res2 = ft_lstnew(mot2);
	t_list *res3 = ft_lstnew(mot3);

	res1->next = res2;
	res2->next = res3;

	//ou utilise ft_lstadd_front

	t_list	*tete;
	int	resultats;

	tete = res1;
	resultats = ft_lstsize(tete);

	printf("%d", resultats);
}
