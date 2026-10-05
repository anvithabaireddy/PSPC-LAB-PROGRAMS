#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	if(a>=85)
	{
		printf("A grade");
	}
	else if(a>=75&&a<85)
	{
		printf("B grade");
	}
	else if(a>=65&&a<75)
    {
    	printf("C grade");
	}
	else if(a>=55&&a<65)
	{
		printf("D grade");
	}
	else if(a>=45&&a<55)
	{
		printf("E grade");
	}
	else
	{
		printf("Fail");
		return 0;
	}
}
