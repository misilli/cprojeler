#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbar(int nb)
{
    int dec;
    
    dec = nb ; 
    int basamak_sayisi = 1;

    if(nb<0)
        dec=dec*-1;
    
    while (dec > 9) {
        dec=dec/ 10; 
        basamak_sayisi++;
        
    }

    power(nb,basamak_sayisi);
}
void power(int nb,int basamak_sayisi)
{
    int j;
    int power;

    j=2;
    power =1;
    while ( basamak_sayisi >=j)
    {
        power = power *10;
        j++;
    }
    giti(power, nb);
}
void giti (int b,int nb)
{
    if(nb<0)
        ft_putchar('-');
        nb=nb*-1;
        
    while (b>1)
    {
        ft_putchar(nb / b + 48);
        nb = nb -  (nb / b)*b;
        b=b/10;
    }
    ft_putchar(nb % 10 + 48);
}


int main()
{
    ft_putnbar(0);
}