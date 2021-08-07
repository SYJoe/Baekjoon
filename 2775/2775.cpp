#include <stdio.h>
#include <stdlib.h>

int resident(int k, int n)
{
	if(n == 1)
	{
		return 1;
	}
	if(k == 0)
	{
		return n;
	}
	return resident(k, n-1) + resident(k-1, n);
}

int main()
{
	int t = 0;
	int* k;
	int* n;
	scanf("%d", &t);
	k = (int*)calloc(t, sizeof(int));
	n = (int*)calloc(t, sizeof(int));
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &k[i]);
		scanf("%d", &n[i]);
		printf("%d\n", resident(k[i], n[i]));
	}
}