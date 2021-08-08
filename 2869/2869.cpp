#include <stdio.h>

int main()
{
	int a, b, v;
	int day = 0;
	scanf("%d %d %d", &a, &b, &v);
	
	if((v-b)%(a-b) != 0)
	{
		day = 1;
	}
	day += (v-b)/(a-b);
	printf("%d", day);
}