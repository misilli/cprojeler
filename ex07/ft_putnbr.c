 #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbar(int nb)
{
	int sayi;
	
	sayi = nb;

    int basamak_sayisi = 0;

    // Sayının her basamağına ulaşma
    while (sayi > 0) {
        sayi /= 10; // Sayıyı 10'a böleriz
        basamak_sayisi++;
		
    }

	int n;

	n = basamak_sayisi;
	while (n < 0)
	{
		if (n <0)
		{
			ft_putchar('a');
		}
		else
		{
		  	ft_putchar(nb / 10^n + 48);
			ft_putchar(nb % 10^n + 48);
			nb= nb - (nb / 10^n + 48)*10^n;
		}
		n--;
	}
}
void power(int power ,int nb)
{
	int j;

	j=0;
	while ( nb <=j)
	{
		power = power *10;
		j++;
	}
	git(power);
}
int git (int)
{}


int main()
{
	ft_putnbar(1312123232);
}