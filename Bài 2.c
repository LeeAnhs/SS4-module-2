#include<stdio.h>

int main() {
	//B1:khai bao bien 
	int  songuyen;
	//b2:nhap xuat du lieu
	printf("Nhap mot so nguyen: ");
	scanf("%d", &songuyen);
	//b3:kiem tra so chan hay le 
	if(songuyen%2==0) {
		printf("%d la so chan\n", songuyen);
	} else {
		printf("%d la so le\n", songuyen); 
	} 
	return 0; 
	} 
