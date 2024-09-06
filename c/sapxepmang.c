#include<stdio.h>
void sapxep(int n, int a[]){
    int tam;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1 ; j++){
            if(a[j] > a[j+1]){
                int tam = a[j];
                a[j] = a[j+1];
                a[j+1] = tam; 
            }
        }
    }
}
int main(){
    int a[50];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap la:");
    for (int i = 0; i < n; i++){
        printf(" %d", a[i]);
    }

    sapxep(n , a);
    printf("\nMang sau khi sap xep: ");
    for(int i = 0; i < n; i++){
        printf(" %d" , a[i]);
    }
}