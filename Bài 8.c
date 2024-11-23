#include <stdio.h>

int main() {
    // Khai bao bien
    float a, b, c;
    
    //Nhap du lieu
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    
    // Kiem tra canh tam giac
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("%.2f, %.2f, %.2f la 3 canh tam giac\n", a, b, c); 
    } else {
        printf("%.2f, %.2f, %.2f khong phai la 3 canh tam giac\n", a, b, c); 
    }
    
    // ket thuc chuong trinh
    return 0;
}
