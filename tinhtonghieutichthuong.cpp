#include<stdio.h>
int main ()
{
	int a,b;
	int tong, hieu, tich;
	float thuong;
	printf ("nhap vao hai so nguyen: ");
	scanf ("%d%d",&a,&b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	if(b=0)
	{
		printf("tong=%d\n",tong);
		printf("hieu=%d\n",hieu);
		printf("tich=%d\n",tich);
		printf("khong chia duoc vi mau bang khong");
	}
	else
	{
		thuong=(float)a/b;
		printf("tong=%d\n",tong);
		printf("hieu=%d\n",hieu);
		printf("tich=%d\n",tich);
		printf("thuong=%.2f",thuong);			
	}
	return 0;
}
