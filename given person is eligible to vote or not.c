#include<stdio.h>
int main()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
{
	printf("the given person is eligible to vote");
	}
	else
	{
	printf("the given person is not eligible to vote");
	}
	   return 0;	
}
