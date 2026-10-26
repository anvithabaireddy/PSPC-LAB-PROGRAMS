#include<stdio.h>
int main()
{
	int i,n,a[100],max,min,e_sum=0,o_sum=0,e_count=0,o_count=0;
	printf("enter no.of elements");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
			if(a[i]<min)
			{
				min=a[i];
			}
	}
	printf("max=%d\n",max);
	printf("min=%d",min);
	return 0;
}
