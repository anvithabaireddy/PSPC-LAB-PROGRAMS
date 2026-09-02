#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,A,B,C;
	printf("Enter a,b,c values\n");
	scanf("%f%f%f",&a,&b,&c);
	A=acos((-pow(a,2)+pow(b,2)+pow(c,2))/(2*b*c))*180/3.14159;
	B=acos((pow(a,2)-pow(b,2)+pow(c,2))/(2*a*c))*180/3.14159;
	C=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/3.14159;
	printf("A=%f\n",A);
	printf("B=%f\n",B);
	printf("C=%f\n",C);
	return 0;
}
