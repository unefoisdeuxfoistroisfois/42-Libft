/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:03:41 by britela-          #+#    #+#             */
/*   Updated: 2025/05/04 18:37:58 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;   // notre nouvelle liste vide
	t_list	*new_node;          // un maillon temporaire
	void	*new_content;       // le nouveau content qu'on va mettre dans le maillon

	new_list = NULL;
	while (lst != NULL)
	{
		// Appliquer la fonction f à l'ancien content pour en créer un nouveau
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			// En cas d'échec, on nettoie tout
			ft_lstclear(&new_list, del);
			return (NULL);
		}

		// Créer un nouveau maillon avec le nouveau contenu
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			// Si on n'a pas réussi à créer le maillon, on libère le contenu et on arrête tout
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}

		// Ajouter le nouveau maillon à la fin de la nouvelle liste
		ft_lstadd_back(&new_list, new_node);

		// Passer au maillon suivant de la liste d'origine
		lst = lst->next;
	}

	// Retourner la nouvelle liste modifiée
	return (new_list);
}

int	main()
{
	return (0);
}
