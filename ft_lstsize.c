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

	mode = malloc(sizeof(t_list));
	if (node == NULL)
	{
		return (NULL);
	}
	
	node->content = content;
	node->new = NULL;

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
	int	resultats

	tete = res1;
	resultats = ft_lstsize(tete);

	printf("%s", resultats);
