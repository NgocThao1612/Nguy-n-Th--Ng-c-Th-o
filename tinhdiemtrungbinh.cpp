#include<stdio.h>
int main ()
{
	float toan,ly,hoa;
	int hst,hsl,hsh;
	float dtb;
	printf("nhap diem 3 mon toan, ly, hoa: ");
	scanf("%f%f%f", &toan,&ly,&hoa);
	printf("nhap he so 3 mon toan, ly, hoa: ");
	scanf("%d%d%d",&hst,&hsl,&hsh);
	if ( (toan>=0&&toan<=10) && (ly>=0&&ly<=10) && (hoa>=0&&hoa<=10) && (hst>=1&&hst<=3) && (hsl>=1&&hsl<=3) && (hsh>=1&&hsh<=3))
	{ dtb = (toan*hst + ly*hsl + hoa*hsh)/(hst+hsl+hsh);
	printf ("diem trung binh=%.1f",dtb);	
	}
	else
		printf("khong tinh duoc diem trung binh");
	return 0;
}
