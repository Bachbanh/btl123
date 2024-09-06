#include <stdio.h>

int main(){
    int m,n;
    scanf("%d", &n); 
    scanf("%d", &m); 

    /*  
        INPUT
        5 5 
        OUTPUT 
        11111 
        11111 
        11111 
        11111
        11111

    */ 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("1");
        }
        printf("\n");
    }    
   
}