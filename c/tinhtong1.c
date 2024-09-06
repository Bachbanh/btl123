#include <stdio.h>
void sum(int n , int m){
    int sum = 0;
    for(int i = n ; i <= m ; i++){
        sum = sum +i;
    }
    for(int i = m ; i <= n ; i++){
        sum = sum +i;
    }
    printf("%d", sum);
}
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    sum(n,m);
}