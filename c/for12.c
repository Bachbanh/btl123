#include<stdio.h>
/*
    4444 444
    4333 334
    4322 234
    4321 234

    4322 234
    4333 334
    4444 444
*/
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int dem = i;
        for(int j= 1; j <= i; j++){
            printf("%d",j);

        }
        printf("\n");
    }
}