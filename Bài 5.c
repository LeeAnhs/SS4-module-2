#include <stdio.h>

int main () {
	//b1:khaibaobien 
	int n1,n2,n3;
	//b2:Nhap du lieu
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &n1);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &n2);
	printf("Nhap so nguyen thu ba: ");
	scanf("%d", &n3);
	//b3:kiem tra so thu 3 co nam trong khang gia so thu 2 va 1 khong
	if ((n1 < n3 && n3 < n2) || (n2 < n3 && n3 < n1)) {
		printf("So %d nam trong khoang giua %d va %d \n", n3,n1,n2); 
	} else {
		printf("So %d khong nam trong khoang giua %d va %d \n", n3,n1,n2); 
	} 
	return 0; 
} 
