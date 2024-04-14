#include<stdio.h>
int main()
{
	int a,b;
	int max,min;
	printf("nhap vap hai so nguyen: ");
	scanf("%d%d",&a,&b);
	if (a>b)
	max=a;
	else
	max=b;
	if (a<b)
	min=a;
	else
	min=b;
	printf("min=%d\tmax=%d",min,max);
	return 0;
}
