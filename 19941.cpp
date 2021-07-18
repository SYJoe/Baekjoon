#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k, length, status, j, cnt = 0;
	char *hp;
	
	scanf("%d %d", &n, &k);
	hp = (char *)calloc(n, sizeof(char));
	scanf("%s", hp);
	for(int i = 0; i < n; i++)
	{
		j = -k;
		status = 0;
		if(hp[i] == 'P')
		{
			while(j <= k)
			{
				if(hp[i+j] == 'H')
				{
					hp[i+j] = '2';
					hp[i] = '2';
					status = 1;
					cnt++;
				}
				
				if(status)
				{
					break;
				}
				else
				{
					j++;
				}
			}
		}
	}
	
	printf("%d", cnt);
}