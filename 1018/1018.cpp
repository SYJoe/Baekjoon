#include <stdio.h>

int distance(int a, int b)
{
	if(a > b/2)
	{
		return b-a;
	}
	else
	{
		return a;
	}
}

int main()
{
	int x, y, w, h, dist_x, dist_y;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	dist_x = distance(x, w);
	dist_y = distance(y, h);
	
	if(dist_x > dist_y)
	{
		printf("%d", dist_y);
	}
	else{
		printf("%d", dist_x);
	}
}