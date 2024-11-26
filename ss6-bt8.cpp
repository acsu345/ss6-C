#include <stdio.h>

int main() {
    float tienGui, laiSuat, soThang, tienLai = 0, tongTien;
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tienGui);
    printf("Nhap lai suat hang thang (%%): ");
    scanf("%f", &laiSuat);
    printf("Nhap so thang gui: ");
    scanf("%f", &soThang);
    laiSuat /= 100;
    for (int i = 1; i <= soThang; i++) {
        tienLai = tienGui * laiSuat;
    }
    tongTien = tienGui + tienLai;
    printf("So tien lai sau %d thang la: %.2f\n", (int)soThang, tienLai);
    printf("Tong so tien nhan duoc la: %.2f\n", tongTien);

    return 0;
}
