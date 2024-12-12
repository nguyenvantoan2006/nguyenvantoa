#include <stdio.h>

int main() {
	
    float soGiolam, luongTheogio, luongCoban, phuCap, tongLuong;

    
    printf("Nhap so gio lam trong thang: ");
    scanf("%f", &soGiolam);
    
    
    printf("Nhap muc luong theo gio: h");
    scanf("%f", &luongTheogio);

    luongCoban = soGiolam * luongTheogio;
    if (soGiolam > 160) {
        phuCap = luongCoban * 0.1; 
    } else {
        phuCap = 0; 
    }

    tongLuong = luongCoban + phuCap;

    printf("Tong luong: %.2f\n", tongLuong);

    return 0;
}
