#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
