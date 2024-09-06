#include <stdio.h>
void max(int n , int a[]){
    int max = a[0];
    for(int i = 0 ; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    printf("%d", max);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    max(n, a);
}