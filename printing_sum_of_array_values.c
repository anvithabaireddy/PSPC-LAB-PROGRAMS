#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("enter values in array");
	scanf("%d",&n);
	   printf("enter %d values");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	   printf("%d",sum);
	return 0;      		
}
