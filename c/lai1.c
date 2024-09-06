#include <stdio.h>
#include <string.h>

void xoakitu(char a[] , char c){
    int j = 0;
    int i = 0;
    for(i = 0; i < strlen(a) ; i++){
        if(a[i] != c){
            a[j++] = a[i];
        }
    }
}

int main() {
    char str[] = "a1@a2@a3";
    char c = '@';

    printf("Chuoi dau: %s\n", str);
    xoaKiTu(str, c);
    printf("Chuoi sau khi xoa '%c': %s\n", c, str);

    return 0;
}
