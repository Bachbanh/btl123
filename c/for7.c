#include <stdio.h>

/*

    Output
    10101
    01010
    10101
    01010
    10101

*/

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n; j++){
            if(j % 2== 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
}