#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 1;
	j = 0;
	while (i < size)
	{
		temp = tab[i];
		j = i - 1;
		while (tab[j] > temp && j >= 0)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = temp;
		i++;
	}
}

int	main(void)
{
	int ko[] = {1, 4, 3, 2, 5, 8, 7, 9, 6};
	int sa = 9;
	ft_sort_int_tab(ko, sa);
	int i;
	char t;

	i = 0;
	while (ko[i] != '\0')
	{
		t = ko[i] + 48;
		write(1, &t, 1);
		i++;
	}
}