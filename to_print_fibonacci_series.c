#include<stdio.h>
int main()
{
	int n,i,First=0,Second=1,Third;
	printf("enter n value");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	   {
	   	Third=First+Second;
	   	printf("%d\t",Third);
	   	First=Second;
	   	Second=Third;
	   }
	   return 0;
}
