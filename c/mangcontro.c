#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int *ptr = &a[n-1];
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n ; i++){
       printf("%d ", *ptr);
       ptr--;
    }
}