#include<stdio.h>

int main (){
	//B1:khai bao bien 
	int year;
	
	//b2:Nhap du lieu
	printf("Nhap nam:");
	scanf("%d", &year);
	
	//B3:Kiem tra nam 
	if ((year%4==0 && year%100!=0) || (year%400==0)) {
		printf("%d la nam nhuan \n", year); 
	} else {
		printf("%d khong phai la nam nhuan \n" , year); 
	} 
	 return 0; 
} 
