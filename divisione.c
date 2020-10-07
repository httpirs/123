#include <stdlib.h>
#include <stdio.h>
int d(size_t x, size_t y, size_t r) {
	if (x < y)
		return r;
	x -= y;
	int f=d(x, y, r + 1);
}
int Quoziente(size_t x, size_t y) {
	if (x == 0 &&y!=0 || y > x )
		return 0;
	if (y == 0)
		return -1;
	int n = d(x, y, 0);
	return n;
}
int main(void) {
	size_t x = 12;
	size_t y = 4;
	size_t a = Quoziente(x, y);
	printf("Il risultato e' %i", a);
	return EXIT_SUCCESS;
}
