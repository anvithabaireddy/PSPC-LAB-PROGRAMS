#include<stdio.h>
#include<string.h>
int main()
{
	char st[5][30];
	int i;
	printf("enter 5 names\n");
	for(i=0;i<5;i++)
	{
		gets(st[i]);
	}
	printf("your friends name:\n");
	for(i=0;i<5;i++)
	{
		printf("%s",st[i]);
	}
	return 0;
}

