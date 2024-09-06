#include <stdio.h>
int tong(int k){
    int sum = 0;
    int num;

    for(int i = 0 ; i < k ; i++){
        scanf("%d", &num);
        sum = sum + num;
    }
   
    return sum;
}
int main(){
    int k;
    scanf("%d", &k);
    int tinhtong = tong(k);
    printf("%d", tinhtong);
}