#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
    ft_strncpy(dest+i,src,nb);  
	return (dest);
}

int	main()
{
	char src[] = "Network";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 5));
}