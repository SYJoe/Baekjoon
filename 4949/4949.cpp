#include <stdio.h>
#include <stdlib.h>

int marks(char* str, int end)
{
	int small_open = 0;
	int small_close = 0;
	int big_open = 0;
	int big_close = 0;
	
	for(int i = 0 ; i < end; i++)
	{
		if(str[i] == '(')
		{
			small_open++;
		}
		else if(str[i] == ')'&&small_open)
		{
			small_close++;
		}
		else if(str[i] == '[')
		{
			big_open++;
		}
		else if(str[i] == ']'&&big_open)
		{
			big_close++;
		}
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

void print_result(char* str)
{
	int i = 0;
	int end;
	int result;
	while(str[i] != '\0')
	{
		if(str[i] == '.')
		{
			end = i+1;
			result = marks(str, end);
			if(result)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		i++;
	}
}

int main()
{
	char* str;
	
	while(1)
	{
		str = (char*)malloc(101*sizeof(char));
		fgets(str, sizeof(str), stdin);
		if(str[0] == '.')
		{
			break;
		}
		else
		{
			print_result(str);
		}		
		free(str);
	}
}
