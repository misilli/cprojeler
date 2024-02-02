#include <unistd.h>

int	main(void)
{
	int a; // cani cok acicak haberi yok denek
	int b; // iskenceyi yapan bilimadami
    b = 10;

	a = b;//eşitliyor
	write(1, &a, 1);
	a += b;//ekliyor
	write(1, &a, 1);
	a -= b;//eksiltiyor
	write(1, &a, 1);
	a *= b;//carpiyor
	write(1, &a, 1);
	a /= b;//boluyor
	write(1, &a, 1);
	a %= b;//modunu aliyor
	write(1, &a, 1);
	a &= b;//bool and
	write(1, &a, 1);
	a |= b;//bool veya
	write(1, &a, 1);
	a ^= b;//bool farklı ise
	write(1, &a, 1);
	a <<= b;//
	write(1, &a, 1);
	a >>= b;//
	write(1, &a, 1);
}