#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int n1 = *(int *)a;  
    int n2 = *(int *)b;    

    if (n1 < n2)    
        return -1;      
    
    if (n1 > n2)    
        return 1;       
    
    return 0;
}

int main()
{
	int n = 0;
	int* arr;
	scanf("%d", &n);
	arr = (int*)calloc(n+1, sizeof(int));
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), compare);
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}