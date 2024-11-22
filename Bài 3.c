#include<stdio.h>

int main() {
	//B1:khai bao bien 
	int  songuyen;
	//b2:nhap xuat du lieu
	printf("Nhap mot so nguyen: ");
	scanf("%d", &songuyen);
	//b3:kiem tra so chan hay le 
	if(songuyen%3==0) {
		printf("%d chia het cho 3\n", songuyen);
	} else if (songuyen%5==0){
		printf("%d chia het cho 5\n", songuyen); 
	} else if (songuyen%3==0 && songuyen%5==0){
		printf("%d chia het cho ca 3 va 5\n", songuyen); 
	}
	return 0; 
	} 
	 
