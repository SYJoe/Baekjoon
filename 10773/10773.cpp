#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int* arr;
	arr = (int*)calloc(n, sizeof(int));
	int* arr_ans;
	arr_ans = (int*)calloc(n, sizeof(int));
	int inp = 0;
	int sum = 0;
	int tmp = 0;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &inp);
		if(inp == 0)
		{
		 	tmp--;
		}
		else
		{
			arr_ans[tmp] = inp;
			tmp++;
		}
	}
	for(int i = 0; i < tmp; i++)
	{
		sum += arr_ans[i];
	}
	printf("%d\n", sum);
}