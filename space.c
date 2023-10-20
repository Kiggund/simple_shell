#include <ctype.h>
#include <stdio.h>
int main()
{
	char c = ' ';
	if (isspace(c))
	{
		printf("the char is space");
	}
	else
	{
		printf("the char is not space");
	}
	return 0;
}
