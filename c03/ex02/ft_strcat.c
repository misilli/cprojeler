#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
    ft_strcpy(dest+i,src);
	return (dest);
}

int main()
{
    char ko[3]="asd";
    char ok[4]="day";

    ft_strcat(ko,ok);
    printf("%s",ko);

}