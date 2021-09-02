#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, n;
	int* length;
	long long sum = 0;
	int j = 0;
	int cnt = 0;
	long long pre;
	long long tmp_pre;
	scanf("%d %d", &k, &n);
	length = (int*)calloc(k, sizeof(int));
	
	for(int i = 0; i < k; i++)
	{
		scanf("%d", &length[i]);
		sum += length[i];
	}
	sum /= n;
	pre = sum;
	sum /= 2;
	for(int i = 0; i < 120; i++)
	{
		//printf("sum %lld ", sum);
		j = 0;
		cnt = 0;
		while(j < k)
		{
			cnt += length[j] / sum;
			j++;
		}
		
		int a = pre - sum;
		if(a < 0)
		{
			a *= -1;
		}
		if(cnt > n)
		{
			tmp_pre = sum;
			sum += a/2;
			pre = tmp_pre;
		}
		else if(cnt == n)
		{
			break;
		}
		else
		{
			tmp_pre = sum;
			sum -= a/2;
			pre = tmp_pre;
		}
			//printf("cnt %d\n", cnt);
	}
	
	printf("%lld\n", sum);
}