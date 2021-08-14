#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
	int age;
	char name[101];
}member;

int compare(const void* a, const void* b) {
	
	person* ptA = (person*)a;
	person* ptB = (person*)b;
	
	if(ptA->age > ptB->age)
	{
		return 1;
	}
	if(ptA->age < ptB->age)
	{
		return -1;
	}
	return 0;
}

int main()
{
	int n = 0; 
	scanf("%d", &n);
	person* a = (person*)calloc(n, sizeof(person));
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %s", &a[i].age, &a[i].name);
	}
	
	qsort(a, n, sizeof(person), compare);
	
	for(int i = 0; i < n; i++)
	{
		printf("%d %s\n", a[i].age, a[i].name);
	}
}