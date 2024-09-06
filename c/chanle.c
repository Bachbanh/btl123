#include <stdio.h>

int main() {
    int chon;
    int sum, n;
    do {
        printf("1. Tinh tong so chan.\n");
        printf("2. Tinh tong so le.\n");
        printf("Ban chon: ");
        scanf("%d", &chon);

        switch(chon) {
            case 1:
                sum = 0;
                printf("Nhap n: ");
                scanf("%d", &n);
                for(int i = 1; i <= n; i++) {
                    if(i % 2 == 0) {
                        sum += i;
                    }
                }
                printf("Tong cac so chan tu 1 den %d la: %d\n", n, sum);
                break;
            case 2:
                sum = 0;
                printf("Nhap n: ");
                scanf("%d", &n);
                for(int i = 1; i <= n; i++) {
                    if(i % 2 != 0) {
                        sum += i;
                    }
                }
                printf("Tong cac so le tu 1 den %d la: %d\n", n, sum);
                break;
            default:
                printf("Thoat chuong trinh.\n");
                break;
        }
    } while(chon >= 1 && chon <= 2); // Lặp lại nếu người dùng chọn 1 hoặc 2

    return 0;
}
