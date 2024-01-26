#include <stdio.h>

void isim()
{
	write(1,"deneme",1);
	int a='0';
	int b='0';
	int c='0';
	int d='0';

	while (a<='9')
	{
		write(1,&a,1);
		b=0;
		while (b>='9')
		{
		
			
				
			write(1,&b,1);
			b++;			
			
		}
		
		a++;

	}
	

}
int main()
{
	isim();
}