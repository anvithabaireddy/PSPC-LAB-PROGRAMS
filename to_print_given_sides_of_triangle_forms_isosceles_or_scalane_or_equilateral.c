#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter sides of a triangle a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
{
	printf("the triangle is equilateral");
}	
    else if(a==b || b==c || c==a)
    {
    printf("the triangle is isosceles");
    }
    else
    {
    printf("the triangle is scalane");
	}
	return 0;
}
