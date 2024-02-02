void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size)
	{
		i++;
		temp = tab[i];
		while (tab[j] > temp && j >= 0)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = temp;
	}
}

int	main(void)
{
	int ko[] = {1, 4, 3, 2};
	int sa = 4;
	ft_sort_int_tab(ko, sa);
}