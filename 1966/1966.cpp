#include <stdio.h>
#include <stdlib.h>

struct print{
	int tmp;
	int impor;
};

void back(print* queue, int length)
{
	print mem = queue[0];
	for(int i = 0; i < length - 1; i++)
	{
		queue[i] = queue[i+1];
	}
	queue[length - 1] = mem;
}

void pop(print* queue, int cur, int length, int cnt)
{
	if(cur == queue[0].tmp)
	{
		printf("%d\n", cnt);
	}
	for(int i = 0; i < length; i++)
	{
		queue[i] = queue[i+1];
	}
	queue[length].impor = 0;
}

int main()
{
	int test = 0;
	int n = 0;
	int cur = 0;
	int index = 0;
	int cnt = 0;
	print* queue;
	scanf("%d", &test);
	
	for(int i = 0; i < test; i++)
	{
		scanf("%d %d", &n, &cur);
		queue = (print*)calloc(n, sizeof(print));
		
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &queue[j].impor);
			queue[j].tmp = j;
		}
		while(queue[0].impor != 0)
		{
			for(int j = 0; j < n; j++)
			{
				for(int l = 1; l < n; l++)
				{
					if(queue[0].impor < queue[l].impor)
					{
						back(queue, n);
						break;
					}
				}
			}
			cnt++;
			n--;
			pop(queue, cur, n, cnt);
		}
		cnt = 0;
	}
}