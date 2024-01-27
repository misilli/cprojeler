
#include <unistd.h>

void	ft_putchar(char c, int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		write(1, &c, 1);
		i++;
	}
}
