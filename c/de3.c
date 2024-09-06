#include <stdio.h>
int Dem(int m){
    int x;
    int num;
    scanf("%d", &x);
    int dem = 0;
    for(int i = 0; i < m ; i++){
        scanf("%d", &num);
        if(num == x){
            dem++;
        }
    }
    
    return dem;
}
int main(){
    int m;
    scanf("%d", &m);
    int tinhdem = Dem(m);
    printf("%d", tinhdem);
}