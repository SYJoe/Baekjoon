#include <stdio.h>

int main()
{
	int sig = 0;
	int a, b, c;
	
	do
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a == 0 && a == b && b == c)
		{
			sig = 1;
		}
		else
		{
			if((a*a) + (b*b) == c*c)
			{
				printf("right\n");
			}
			else if((b*b) + (c*c) == a*a)
			{
				printf("right\n");
			}
			else if((a*a) + (c*c) == b*b)
			{
				printf("right\n");
			}
			else
			{
				printf("wrong\n");
			}
		}
	}while(sig == 0);
	return 0;
}