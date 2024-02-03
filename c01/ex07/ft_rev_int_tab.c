#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	sizecopy;
	int	i;

	i = 0;
	sizecopy = size;
	while (i < (sizecopy / 2))
	{
		size--;
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
	}
}
