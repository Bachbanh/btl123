#include <stdio.h>
#include <string.h>
#include <ctype.h>

int xaukitu(char a[]) {
    if (strlen(a) > 10) {
        return 0;
    }

    int hasAlpha = 0, hasSpecial = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isalpha(a[i])) {
            hasAlpha = 1;
        } else if (strchr("!@#$%^&*", a[i]) != NULL) {
            hasSpecial = 1;
        }
    }

    if (hasAlpha && hasSpecial) {
        return 1;
    } else {
        return 0;
    }
}

void chuyenkitu( char a[]){
    
    printf("xau sau khi chuyen doi: ");
    for(int i = 0; i < strlen(a) ; i++){
        if(isupper(a[i])){
            printf("%c", tolower(a[i]));
        }else{
            printf("%c", toupper(a[i]));
        }
    }
}



int main(){
    char a[100];
    
    while (1) {
        printf("Nhap vao xau: ");
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = 0;

        if (xaukitu(a) == 0) {
            printf("Xau khong thoa man. Vui long nhap lai.\n");
        } else {
            break;
        }
    }
    
    chuyenkitu(a);

}