#include <stdio.h>

int reverse(int n)
{
	int cal = 0;
	cal = (n%10)*100;
	cal += ((n%100) - (n%10));
	cal += ((n%1000) - (n%100))/100;
	return cal;
}

int main()
{
	int a = 0;
	int b = 0;
	int cal = 0;
	
	scanf("%d %d", &a, &b);
	a = reverse(a);
	b = reverse(b);
	
	if(a > b) printf("%d", a);
	else printf("%d", b);
	return 0;
}