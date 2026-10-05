#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("enter n value");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	  {
	  	fact=fact*i;
      }
	  printf("the factorial of %d=%d\n",n,fact);
	  return 0;
}
