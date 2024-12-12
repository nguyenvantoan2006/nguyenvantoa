#include <stdio.h>

int main() {
    char loaiTien;
    float soTien, ketQua;
    int luaChon;

        printf("\n ========== CHUONG TRINH CHUYEN DOI TIEN TE ========== \n");
        printf("1. USD to VND \n");
        printf("2. EUR to VND \n");
        printf("3. GBP to VND \n");
        printf("4. JPY to VND \n");
        printf("5. VND to USD \n");
        printf("6. VND to EUR \n");
        printf("7. VND to GBP \n");
        printf("8. VND to JPY \n");
        printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
        scanf("%d", &luaChon);
        printf("Nhap so tien ban muon chuyen doi: ");
        scanf("%f",&soTien);

        switch (luaChon) {
            case 1:
            ketQua = soTien * 25.378;
            printf("%.0f USD = %.3f VND \n",soTien, ketQua);
            break;
                
            case 2:
            ketQua = soTien * 26.644;
            printf("%.0f EUR = %.3f VND \n",soTien, ketQua);   
            break;
                
            case 3:
            ketQua = soTien * 32.303;
            printf("%.0f GBP = %.3f VND \n",soTien, ketQua);
             break;
            
            case 4:
            ketQua = soTien * 166;
            printf("%.0f JPY = %.0f VND \n",soTien, ketQua);
             break;
            
            case 5:
            ketQua = soTien / 25.378;
            printf("%.0f VND = %.3f USD \n",ketQua, soTien);
            break;
                
            case 6:
            ketQua = soTien / 26.644;
            printf("%.0f VND = %.3f EUR \n",soTien, ketQua);   
            break;
                
            case 7:
            ketQua = soTien / 32.303;
            printf("%.0f VND = %.3f GBP \n",soTien, ketQua);
            
            
            case 8:
            ketQua = soTien / 166;
            printf("%.0f VND = %.0f JPY \n",soTien, ketQua);
             break;
            
            default:
                printf("Lua chon khong hop le! \n");
            break;
        }

    return 0;
}
