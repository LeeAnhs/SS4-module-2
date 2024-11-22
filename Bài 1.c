#include<stdio.h>

int main() {
	//B1:khai bao bien 
	int  songuyen;
	//b2:nhap xuat du lieu
	printf("Nhap mot so nguyen: ");
	scanf("%d", &songuyen);
	//b3:kiem tra so an hay duong
	if(songuyen>0) {
		printf("%d la so duong\n", songuyen);
	} else {
		printf("%d la so am\n", songuyen); 
	} 
	return 0; 
	} 
