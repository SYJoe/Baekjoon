#include <stdio.h>

int divide(int i)
{
	int num = 1;
	int cnt = 0;
	int result = i;
	for(int j = 0; j < 7; j++)
	{
		num *= 10;
		cnt++;
		if(num >= i)
		{
			break;
		}
	}
	for(int j = 0; j < cnt; j++)
	{
		result += i%10;
		i /= 10;
	}
	return result;
}

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	
	while(divide(i) != n)
	{
		i++;
		if(i >= 1000000)
		{
			i = 0;
			break;
		}
	}
	printf("%d", i);
}