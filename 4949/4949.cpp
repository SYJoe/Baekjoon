#include <stdio.h>
#include <stdlib.h>

int marks(char* str, int end)
{
	int small_open = 0;
	int small_close = 0;
	int big_open = 0;
	int big_close = 0;
	printf("%s\n", str);
	for(int i = 0 ; i < end; i++)
	{
		if(str[i] == '(')
		{
			small_open++;
		}
		else if(str[i] == ')' && small_open > small_close)
		{
			if(big_open != big_close)
			{
				return 0;
			}
			small_close++;
		}
		else if(str[i] == '[')
		{
			big_open++;
		}
		else if(str[i] == ']' && big_open > big_close)
		{
			if(small_open != small_close)
			{
				return 0;
			}
			big_close++;
		}
		printf("%d %d %d %d\n", small_open, small_close, big_open, big_close);
	}
	if(small_open == small_close && big_open == big_close)
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}

int main()
{
	char* str;
	int i = 0;
	int end;
	int result;
	
	while(1)
	{
		char str[101];
		fgets(str, sizeof(str), stdin);
		if(str[0] == '.')
		{
			break;
		}
		else
		{
			i = 0;
			while(str[i-1] != '.' )
			{
				if(str[i] == '.')
				{
					end = i;
					result = marks(str, end);
					if(result)
					{
						printf("yes\n");
					}
					else
					{
						printf("no\n");
					}
					getchar();
					break;
				}
				i++;
			}
		}		
	}
}
