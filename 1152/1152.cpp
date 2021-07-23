#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main()
 {
	 char *arr;
	 int i, check, cnt = 0;
	 arr = (char*)malloc(sizeof(char)*1000000);
	 scanf("%[^\n]", arr);
	 int len = strlen(arr);
	 
	for(i = 0; i < len; i++)
	{
		 if(arr[i] == ' ')
		 {
			 check = 1;
		 }
		 
		 else if(check)
		 {
			 cnt++;
			 check = 0;
		 }
	}
	 
	 printf("%d", cnt);
	 return 0;
 }