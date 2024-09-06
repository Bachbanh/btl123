#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXSV 100

struct sinhvien {
    char hoten[50];
    int msv;
    float toan;
    float van;
    float anh;
};

struct sinhvien danhsachsv[MAXSV];
int soluongsv = 0;

int chuaSo(char *chuoi){
    for(int i = 0; i < strlen(chuoi); i++){
        if(isdigit(chuoi[i])){
            return 1; 
        }
    }
    return 0; 
}

void themsinhvien(){
    struct sinhvien sv;  
    int num;
    do{
        printf("\nNhap ten sinh vien: ");
        getchar();
        fgets(sv.hoten, sizeof(sv.hoten), stdin);

        if(chuaSo(sv.hoten)){
            printf("Ten sinh vien khong duoc chua so. Vui long nhap lai.\n");
            continue; 
        }
        
        printf("Nhap ma sinh vien: ");
        scanf("%d", &sv.msv);
        getchar();
        int trung= 0;
        int i;
        for(i = 0; i < soluongsv; i++){
            if(danhsachsv[i].msv == sv.msv){
                trung = 1;
                printf("Trung ma vui long nhap lai.\n");
                break;
            }
        }

        if(trung==0){
            do{
            printf("Nhap diem toan: ");
            scanf("%f", &sv.toan);
            getchar();
            if(sv.toan < 0 || sv.toan > 10){
                printf("Vui long nhap so trong khoang tu 0 den 10.\n");
            }

            }while(sv.toan < 0 || sv.toan > 10);
            
            do{
            printf("Nhap diem van: ");
            scanf("%f", &sv.van);
            getchar();
            if(sv.van < 0 || sv.van > 10){
                printf("Vui long nhap so trong khoang tu 0 den 10.\n");
            }

            }while(sv.van < 0|| sv.van > 10);

            do{
            printf("Nhap diem anh: ");
            scanf("%f", &sv.anh);
            getchar();
            if(sv.anh < 0 || sv.anh > 10){
                printf("Vui long nhap so trong khoang tu 0 den 10.\n");
            }
            }while(sv.anh < 0 || sv.anh > 10);

            danhsachsv[soluongsv] = sv;
            soluongsv++;

            printf("Them thanh cong.\n");

            printf("\nBam phim bat ki tiep tuc nhap.\n");
            printf("Nhap -1 thoat.\n");
            scanf("%d",&num);
        }
        

    }while(num != -1);
}


void hienthidanhsach(struct sinhvien sv){
    printf("Ten: %s", sv.hoten);
    printf("Ma sinh vien: %d\n", sv.msv);
    printf("Diem toan: %.2f", sv.toan);
    printf(" Diem van: %.2f", sv.van);
    printf(" Diem anh: %.2f\n", sv.anh);
}

void hienthidanhsachsv(){
    if(soluongsv == 0){
        printf("Khong co sinh vien nao.\n");
        return;
    }
    int i;
    for(i = 0; i < soluongsv; i++){
        printf("Sinh vien %d:\n", i + 1);
        hienthidanhsach(danhsachsv[i]);
        printf("\n");
    }
}

void timKiemSinhVienTheoMa(){
    int ma;
    int timThay = 0;
    do{
        printf("Nhap ma sinh vien can tim: ");
        scanf("%d", &ma);
        for (int i = 0; i < soluongsv; i++){
            if (danhsachsv[i].msv == ma){
                timThay = 1;
                printf("Sinh vien duoc tim thay:\n");
                hienthidanhsach(danhsachsv[i]);
                break;
            }
        }
        if(!timThay){
            printf("Khong tim thay sinh vien. Vui long nhap lai.\n");
        }
    }while(!timThay);
}


void suaThongTinSinhVienTheoMa(int ma){
    int timThay = 0;
    do{
        for(int i = 0; i < soluongsv; i++){
        if(danhsachsv[i].msv == ma){
            timThay = 1;
            printf("Nhap thong tin moi cho sinh vien co ma %d:\n", ma);
            printf("Nhap ten sinh vien: ");
            getchar();
            fgets(danhsachsv[i].hoten, sizeof(danhsachsv[i].hoten), stdin);
            if (danhsachsv[i].hoten[strlen(danhsachsv[i].hoten) - 1] == '\n')
                danhsachsv[i].hoten[strlen(danhsachsv[i].hoten) - 1] = '\0';
            printf("Nhap diem toan: ");
            scanf("%f", &danhsachsv[i].toan);
            printf("Nhap diem van: ");
            scanf("%f", &danhsachsv[i].van);
            printf("Nhap diem anh van: ");
            scanf("%f", &danhsachsv[i].anh);
            printf("Thong tin sinh vien da duoc cap nhat.\n");
            break;
            }
        }
        if(!timThay){
            printf("Khong tim thay sinh vien.Vui long nhap lai\n");
        }
    }while(!timThay);
    
}

void xoaSinhVienTheoMa(int ma) {
    int timThay = 0;
    do{
        for (int i = 0; i < soluongsv; i++){
            if (danhsachsv[i].msv == ma){
                timThay = 1;
                for (int j = i; j < soluongsv - 1; j++) {
                    danhsachsv[j] = danhsachsv[j + 1];
                }
                soluongsv--;
                printf("Xoa sinh vien thanh cong.\n");
                break;
            }
        }
        if (!timThay){
            printf("Khong tim thay sinh vien.\n");
        }
    }while(!timThay);
}

float tinhDiemTrungBinh(struct sinhvien sv){
    return (sv.toan + sv.van + sv.anh) / 3.0;
}

float tinhDiemTrungBinhToanBo(){
    if (soluongsv == 0){
        return 0.0;
    }
    float tongDiem = 0.0;
    for (int i = 0; i < soluongsv; i++){
        tongDiem += tinhDiemTrungBinh(danhsachsv[i]);
    }
    return tongDiem / soluongsv;
}

void luuVaoFile(){
    FILE *file = fopen("sinhvien.txt", "w");
    if (file == NULL){
        printf("Loi khi mo flie.\n");
        return;
    }
    for (int i = 0; i < soluongsv; i++){
        fprintf(file, "%s,%d,%.2f,%.2f,%.2f\n", danhsachsv[i].hoten, danhsachsv[i].msv,
                danhsachsv[i].toan, danhsachsv[i].van, danhsachsv[i].anh);
    }
    fclose(file);
    printf("Du lieu da luu vao file thanh cong.\n");
}

void docTuFile() {
    FILE *file = fopen("sinhvien.txt", "r");
    if (file == NULL) {
        printf("Loi khi mo file.\n");
        return;
    }

    struct sinhvien sv;
    while (fscanf(file, "%[^,],%d,%f,%f,%f\n", sv.hoten, &sv.msv, &sv.toan, &sv.van, &sv.anh) != EOF) {
        printf("Thong tin sinh vien:\n");
        printf("Ten: %s\n", sv.hoten);
        printf("Ma sinh vien: %d\n", sv.msv);
        printf("Diem toan: %.2f\n", sv.toan);
        printf("Diem van: %.2f\n", sv.van);
        printf("Diem anh: %.2f\n", sv.anh);
        printf("\n");
    }
    fclose(file);
}



int main(){
    int chon;
    int ma;
    do{
        printf("\nMenu:\n");
        printf("1. Them sinh vien\n");
        printf("2. Hien thi tat ca sinh vien\n");
        printf("3. Tim kiem sinh vien theo ma\n");
        printf("4. Sua thong tin sinh vien theo ma\n");
        printf("5. Xoa sinh vien theo ma\n");
        printf("6. Tinh diem trung binh cua toan bo sinh vien\n");
        printf("7. Luu du lieu vao file\n");
        printf("8. Doc flie.\n");
        printf("9. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);
        switch(chon){
            case 1:
                themsinhvien();
                break;
            case 2:
                hienthidanhsachsv();
                break;
            case 3:
                printf("Nhap ma sinh vien can tim: ");
                scanf("%d", &ma);
                timKiemSinhVienTheoMa(ma);
                break;
            case 4:
                printf("Nhap ma sinh vien can sua: ");
                scanf("%d", &ma);
                suaThongTinSinhVienTheoMa(ma);
                break;
            case 5:
                printf("Nhap ma sinh vien can xoa: ");
                scanf("%d", &ma);
                xoaSinhVienTheoMa(ma);
                break;
            case 6:
                printf("Diem trung binh toan bo sinh vien: %.2f\n", tinhDiemTrungBinhToanBo());
                break;
            case 7:
                luuVaoFile();
                break;
            case 8:
                docTuFile();
                break;
            case 9: 
                printf("Thoat chuong trinh.");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    }while(chon != 9);
    return 0;
}
