#include <stdio.h>

int main()
{
	int a, b, c, d, e = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a *= a;
	a += b*b;
	a += c*c;
	a += d*d;
	a += e*e;
	printf("%d", a%10);
	return 0;
}