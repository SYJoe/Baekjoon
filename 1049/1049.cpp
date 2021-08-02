#include <stdio.h>

int main()
{
	int n, m = 0;
	scanf("%d %d", &n, &m);
	
	int i_one, i_set, cost = 0;
	int cost_one, cost_set = 1001;
	
	for(int i = 0; i < m; i++)
	{	
		scanf("%d %d", &i_set, &i_one);
		if(i_set < cost_set)
		{
			cost_set = i_set;
		}
		if(i_one < cost_one)
		{
			cost_one = i_one;
		}
	}
	
	if(n > 6)
	{
		if(cost_set < cost_one * 6) //낱개 + 세트 or 세트로만 구매
		{
			cost = cost_set * (n/6); 
			if(n%6 != 0)
			{
				if(cost_set < cost_one * (n%6))
				{
					cost += cost_set;
				}
				else
				{
					cost += cost_one * (n%6);
				}
			}
		}
		else //낱개로만 구매
		{
			cost = cost_one * n;
		}
	}
	else
	{
		if(cost_set < cost_one * n)
		{
			cost = cost_set;
		}
		else
		{
			cost = cost_one * n;
		}
	}
	printf("%d", cost);
}