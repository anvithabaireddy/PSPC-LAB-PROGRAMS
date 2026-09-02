#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,A,B,d;
	printf("Enter x1,y1,x2,y2 values\n");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	A=pow(x2-x1,2);
	B=pow(y2-y1,2);
	d=sqrt(A+B);
	printf("distance between two points=%f",d);
	return 0;
}
