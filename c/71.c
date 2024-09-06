#include <stdio.h>
int main(){
    int a,b,c;
    int dem = 0;
    for(int i = 100 ; i < 1000 ; i++){
        // 132
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if(i % 3 == 0 && a+c == b){     
            printf("%d ", i);
            dem++;
            if(dem == 10){
                printf("\n");
            }
        }
    }
}