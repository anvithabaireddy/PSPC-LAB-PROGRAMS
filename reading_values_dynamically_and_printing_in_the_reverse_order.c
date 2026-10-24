#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter number of values in array");
	scanf("%d",&n);
	printf("enter %d value",n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   printf("the values in reverse order are \n");
	for(i=n-1;i>=0;i--)
	   printf("%d\t",a[i]);
	return 0;      
}
