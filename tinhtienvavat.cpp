#include<stdio.h>
int main()
{
	char ten;
	float soluong, dongia;
	float tien, VAT;
	printf("vui long nhap ten san pham: ");
	scanf("%c",&ten);
	printf("\nvui long nhap so luong: ");
	scanf("%f",&soluong);
	printf("\nvui long nhap don gia: ");
	scanf("%f",&dongia);
	if (soluong>0 && dongia>0)
	{
		tien=soluong*dongia;
		VAT=0.1*tien;
		printf("tien truoc khi tinh vat=%6.2f\n",tien);
		printf("VAT=%.2f\n",VAT);
		printf("tien phai tra=%f\n",tien+VAT);
	}
	else
		printf("khong tinh duoc vi so luong hoac don gia <=0");
 	return 0;
}
