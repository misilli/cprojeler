void	ft_putchar(char c, int length);

void	height(int x, char left, char middle, char right )
{
	int	length;

	length = x -2;
	ft_putchar(left, 1);
	ft_putchar(middle, length);
	if (1 != x)
	{
		ft_putchar(right, 1);
	}
	ft_putchar(10, 1);
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	if (x >= 1 && y >= 1)
	{
		height(x, '/', '*', '\\');
		while (i < y)
		{
			height(x, '*', ' ', '*');
			i++;
		}
		if (y > 1)
		{
			height(x, '\\', '*', '/');
		}
	}
}
