int ft_iterative_factorial(int nb)
{
	int ans;

	ans = 1;
	if (nb < 0)
		return(0);
	if(nb == 0)
		return (1);
	while (nb)
	{
		ans = ans * nb;
		nb --;
	}
	return (ans);
}

#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));
}