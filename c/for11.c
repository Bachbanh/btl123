#include <stdio.h>

/*
    1
    2 6
    3 7 10
    4 8 11 13
    5 9 12 14 15

*/

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int dem = i;
        int kc = n-1;
        for(int j = 1; j <= i; j++){
            printf(" %d", dem);
            dem = dem + kc;
            kc--;
        }
        printf("\n");
    }
}