#include <stdio.h>
#include <string.h>

#define MAX_HANG 10
#define MAX_TENMAY 15
#define MAX_CHIP 10

// Định nghĩa cấu trúc qlch
struct qlch {
    char hang[MAX_HANG];
    char tenMay[MAX_TENMAY];
    int ram;
    float gia;
    char chip[MAX_CHIP];
};

// Hàm nhập thông tin của một điện thoại
void nhap(struct qlch *ql) {
    // Nhập tên hãng sản xuất
    do {
        printf("Nhap hang (khong qua 10 ky tu, khong chua dau cach): ");
        scanf("%s", ql->hang);
        if (strlen(ql->hang) > MAX_HANG) {
            printf("Hang khong duoc qua 10 ky tu.\n");
        }
    } while (strlen(ql->hang) > MAX_HANG);

    // Nhập tên máy
    do {
        printf("Nhap ten may (khong qua 15 ky tu, khong chua dau cach): ");
        scanf("%s", ql->tenMay);
        if (strlen(ql->tenMay) > MAX_TENMAY) {
            printf("Ten may khong duoc qua 15 ky tu.\n");
        }
    } while (strlen(ql->tenMay) > MAX_TENMAY);

    // Nhập dung lượng RAM
    do {
        printf("Nhap dung luong RAM (chia het cho 4): ");
        scanf("%d", &ql->ram);
        if (ql->ram <= 0 || ql->ram % 4 != 0) {
            printf("Dung luong RAM phai la so duong chia het cho 4.\n");
        }
    } while (ql->ram <= 0 || ql->ram % 4 != 0);

    // Nhập giá
    do {
        printf("Nhap gia (so thuc duong, don vi trieu VND): ");
        scanf("%f", &ql->gia);
        if (ql->gia <= 0) {
            printf("Gia phai la so thuc duong.\n");
        }
    } while (ql->gia <= 0);

    // Chọn loại chip
    int chon;
    printf("Chon loai chip:\n");
    printf("1. Exynos\n");
    printf("2. SnapDragon\n");
    printf("3. M1\n");
    printf("4. M2\n");
    do {
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: strcpy(ql->chip, "Exynos"); break;
            case 2: strcpy(ql->chip, "SnapDragon"); break;
            case 3: strcpy(ql->chip, "M1"); break;
            case 4: strcpy(ql->chip, "M2"); break;
            default: printf("Lua chon khong hop le. Vui long chon lai.\n"); chon = 0; break;
        }
    } while (chon == 0);
}

// Hàm in thông tin danh sách N chiếc điện thoại
void inDanhSach(struct qlch ds[], int n) {
    printf("+-----+--------------+---------------+-----+------------+--------+\n");
    printf("| STT | Ten hang     | Ten may       | RAM | Chip       | Gia    |\n");
    printf("+-----+--------------+---------------+-----+------------+--------+\n");
    for (int i = 0; i < n; i++) {
        printf("| %-3d | %-12s | %-13s | %-3d | %-10s | %-6.1f |\n", 
                i + 1, ds[i].hang, ds[i].tenMay, ds[i].ram, ds[i].chip, ds[i].gia);
    }
    printf("+-----+--------------+---------------+-----+------------+--------+\n");
}

int main() {
    int n;
    printf("Nhap so luong dien thoai: ");
    scanf("%d", &n);

    struct qlch ds[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin dien thoai thu %d:\n", i + 1);
        nhap(&ds[i]);
    }

    inDanhSach(ds, n);

    return 0;
}
