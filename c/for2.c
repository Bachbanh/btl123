#include <stdio.h>

int main(){
    int m,n;
    scanf("%d", &n); //4
    scanf("%d", &m); //5

    /*  
        *****
        ~*...*
        ~~*...* 
        ~~~*****
    */ 

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i-1; j++){
            printf("~");
        }
        for(int k = 1; k <= m; k++){
            if(i == 1 || i == n || k == 1 || k == m )
                printf("*");
            else    
                printf(".");    
        }
        printf("\n");
    }
   
   
}