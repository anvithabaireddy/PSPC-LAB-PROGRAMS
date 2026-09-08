#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter one value\n");
	scanf("%d",&a);
	printf("%d++=%d\n",a,a++);
	printf("++%d=%d\n",a,++a);
	printf("%d--=%d\n",a,a--);
	printf("--%d=%d\n",a,--a);
	return 0;
}
