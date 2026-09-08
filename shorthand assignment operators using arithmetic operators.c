#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two values to perform shorthand assignment operation\n");
	scanf("%d%d",&a,&b);
	printf("%d+=%d\n=%d\n",a,b,a+=b);
	printf("%d-=%d\n=%d\n",a,b,a-=b);
	printf("%d*=%d\n=%d\n",a,b,a*=b);
	printf("%d/=%d\n=%d\n",a,b,a/=b);
	printf("%d%%=%d\n=%d\n",a,b,a%=b);
	return 0;
}
