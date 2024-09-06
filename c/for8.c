#include <stdio.h>
/*

    1 2 3 4 5
    2 3 4 5 6
    3 4 5 6 7
    4 5 6 7 8
    5 6 7 8 9 

*/
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i<= n ; i++){
        int dem = i;
        for(int j = 1; j <= n; j++){
            printf("%d", dem);
            dem++;
        }
        printf("\n");
    }
}