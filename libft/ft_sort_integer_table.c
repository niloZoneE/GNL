#include "includes/libft.h"

int	*ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab);
}
