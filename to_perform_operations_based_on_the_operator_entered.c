#include<stdio.h>
int main()
{
	char(op);
	int a,b;
	printf("enter a operator");
	scanf("%c",&op);
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case'+':printf("result=%d",a+b);
		        break;
		case'-':printf("result=%d",a-b);
		        break;
		case'*':printf("result=%d",a*b);
		        break;
		case'/':printf("result=%d",a/b);
		        break;
		default:printf("invalid operator");
    }
    return 0;
}
