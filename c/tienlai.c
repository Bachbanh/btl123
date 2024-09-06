#include <stdio.h>

int main() {
    char ten_khach_hang[100];
    float so_tien_gui;
    int thang;

    printf("Nhap ten khach hang: ");
    fgets(ten_khach_hang, sizeof(ten_khach_hang), stdin);

    printf("Nhap so tien gui: ");
    scanf("%f", &so_tien_gui);

    float laisuat;
    printf("Nhap lai suat: ");
    scanf("%f" , &laisuat);
    laisuat = laisuat / 100;

    float tiendauki = so_tien_gui;
    for(int i = 1; i <= 12 ; i++){
        float tienlai = so_tien_gui*laisuat;
        float sodu = tiendauki + tienlai;
        printf("\nThang : %d", i);
        printf("\nTien dau ki: %0.f" ,tiendauki);
        printf("\nTien lai: %0.f", tienlai);
        printf("\nSo du: %0.f", sodu);
        printf("\n");
        tiendauki = sodu;
    }
}