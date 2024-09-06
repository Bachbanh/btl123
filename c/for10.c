#include <stdio.h>

/*
    ~~~~1
    ~~~22
    ~~333
    ~4444
    55555

*/


int main(){
    int n;
    scanf("%d", &n);
    int dem =1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            if(j <= n-i)
            printf("~");
            else
            printf("%d", i);
        }
        printf("\n");
    }
}