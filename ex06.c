#include <stdio.h>
#include <unistd.h>

void isim()
{
	write(1,"deneme",1);
	int a='0';
	int b='0';
	int c='0';
	int d='0';

	while (a<='9')
	{
		
		b='0';
		while (b<='9')
		{
			c ='0';
			while (c<='9')
			{
				d='0';
				while(d<='9')
				{	
					write(1,&a,1);
					write(1,&b,1);
					write(1," ",1);
					write(1,&c,1);
					write(1,&d,1);
					write(1,",",1);
					d++;
				}
				c++;
			}
			b++;
		}
		
		a++;

	}
	

}
int main()
{
	isim();
}
