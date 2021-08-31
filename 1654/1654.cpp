#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, n;
	int* length;
	int sum = 0;
	int j = 0;
	int max_count = 0;
	scanf("%d %d", &k, &n);
	length = (int*)calloc(k, sizeof(int));
	
	for(int i = 0; i < k; i++)
	{
		scanf("%d", &length[i]);
		sum += length[i];
	}
	sum /= n;
	while(max_count < n)
	{
		//printf("mid %d\n", sum);
		max_count = 0;
		j = 0;
		while(j <= k)
		{
			if(length[j]/sum)
			{
				max_count += length[j]/sum;
			}
			j++;
		}
		sum--;
	}
	printf("%d\n", sum+1);
}