#include<stdio.h>
#include<math.h>
int main ()
{
	const float pi=3.14;
	float r;
	float chuvi,dientich;
	do 
	{
		printf("nhap vao ban kinh hinh tron: ");
		scanf("%f",&r);
	}
	while (r<=0);
	chuvi=2*pi*r;
	dientich=pi*pow(r,2);
	printf("chu vi hinh tron la=%.2f\n",chuvi);
	printf("dien tich hinh tron la=%.2f",dientich);
	return 0;
}
