#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*mot = "Bradley";
	int		i = 0;

	while (mot[i] != '\0')
	{
		if (ft_isalpha(mot[i]) == 0)
		{
			printf("erreur\n");
			return (1);
		}
		i++;
	}
	printf("ok\n");
	return (0);
}
