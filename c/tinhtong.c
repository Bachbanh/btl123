#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("%d", sum);
    float sum1 = 0;
    for(int i = 1; i <= n ; i++){
        sum1 = sum1 + 1.0/i;
    }
    printf(" %0.2f", sum1);
}