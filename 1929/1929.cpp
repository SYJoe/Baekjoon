#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, result;
	int j = 2;
	int* arr;
	scanf("%d %d", &m, &n);
	arr = (int*)calloc(n, sizeof(int));
	for(int i = 1; i < n; i++)
	{
		arr[i] = i;
	}
	for(int i = 1; i < n; i++)
	{
		if(arr[i] != 0)
		{
			do{
				arr[i*j] = 0;
				j++;
				printf("%d\n", i);
			}while(i*j <= n);
		}
	}
}