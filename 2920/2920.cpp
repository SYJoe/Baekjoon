#include <stdio.h>

int main()
{
	int cnt_asc = 0;
	int cnt_des = 0;
	int arr[8] = {0,};
	scanf("%d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]);
	
	for(int i = 0; i < 7; i++)
	{
		if(arr[i] > arr[i+1]) cnt_des++;
		else if(arr[i] < arr[i+1]) cnt_asc++;
	}
	if(cnt_des == 7) printf("descending");
	else if(cnt_asc == 7) printf("ascending");
	else printf("mixed");
}