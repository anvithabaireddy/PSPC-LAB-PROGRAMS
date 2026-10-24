#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}
