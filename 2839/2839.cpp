#include <stdio.h>

int main()
{
	int n = 0;
	int cnt = 0;
	scanf("%d", &n);
	
	while(n%5 != 0)
	{
		n -= 3;
		cnt++;
	}
	if(n < 5 && n != 0)
	{
		printf("-1\n");
	}
	else
	{
		cnt += n/5;
		printf("%d", cnt);
	}
}