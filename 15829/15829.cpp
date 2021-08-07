#include <stdio.h>
#include <stdlib.h>
#define M 1234567891

int main()
{
	char* a;
	int l = 0;
	unsigned long long n = 0;
	unsigned long long result = 0;
	a = (char *)calloc(l, sizeof(char));
	scanf("%d", &l);
	scanf("%s", a);
	
	for(int i = 0; i < l; i++)
	{
		n = (int)a[i] - 96;
		for(int j = 0; j < i; j++)
		{
			n *= 31;
		}
		if(n > M)
		{
			n %= M;
		}
		result += n;
		if(result > M)
		{
			result %= M;
		}
	}
	printf("%llu", result);
}