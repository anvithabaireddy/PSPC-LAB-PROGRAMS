#include<stdio.h>
int main()
{
	int n,i,sum=0,rem;
	printf("enter n value");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==i)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
		return 0;
	}
}
