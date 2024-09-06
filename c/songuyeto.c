#include<stdio.h>
#include<math.h>
void songuyeto(int n){
    int kt = 1;
    if(n <= 1){
        kt = 0;
    }else{
        for(int i = 2; i <= sqrt(n) ; i++){
            if(n % i == 0){
                kt = 0;
                break;
            }
        }
    }
    if(kt){
        printf("la so nguyen to");
    }else{
        printf("khong la so nguyen to");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    songuyeto(n); 
}