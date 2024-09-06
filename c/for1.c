#include <stdio.h>

int main(){
    int m,n;
    scanf("%d", &n);
    scanf("%d", &m);

    /*  
        ~~~~*****                   
        ~~~*****
        ~~*****                 
        ~*****
        *****
    */ 

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= m-i; j++){
            printf("~");
        }
        for(int k = 1; k <= m; k++){
            printf("*");
        }
        printf("\n");
    }
   
   
}