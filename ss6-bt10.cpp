#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d la so nguyen to.", num);
    } else {
        printf("%d khong phai la so nguyen to.", num);
    }
    return 0;
}
