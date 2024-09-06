#include <stdio.h>
void doiso(int *a, int *b, int *c){
    int tam = *a;
    *a = *b;
    *b = *c;
    *c = tam;
}
int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    doiso(&a, &b, &c);
    printf("%d %d %d", a , b, c);
}