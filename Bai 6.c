#include <stdio.h>

int main() {
    // Khai bao bien 
    int old, new, elecnumber, bill;

    // Nhap so dien dau va cuoi thang 
    printf("Nhap so dien dau thang: ");
    scanf("%d", &old); 
    printf("Nhap so dien cuoi thang: ");
    scanf("%d", &new);

    // kiem tra du lieu nhap vao hop le hay khong 
    if (old <= 0 || old > new) {
        printf("Du lieu khong hop le.\n");
        return 1;
    }

    // Tinh so dien 
    elecnumber = new - old;

    // Tinh gia tien 
    if (0 <= elecnumber && elecnumber < 50) {
        bill = elecnumber * 10000;
    } else if (50 <= elecnumber && elecnumber < 100) {
        bill = elecnumber * 15000;
    } else if (100 <= elecnumber && elecnumber < 150) {
        bill = elecnumber * 20000;
    } else if (150 <= elecnumber && elecnumber < 200) {
        bill = elecnumber * 25000;
    } else {
        bill = elecnumber * 30000;
    }

    // In ra man hinh 
    printf("So dien da su dung la: %d kWh\n", elecnumber);
    printf("Tien dien thang da su dung la: %d VND\n", bill);

    // Ket thuc chuong trinh 
    return 0;
}
