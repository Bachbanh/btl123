#include <stdio.h>
void doiso(int *x, int *y, int *z){
    int tamthoi = *x;
    *x = *y;
    *y = *z;
    *z = tamthoi;
}
int main(){
    int x = 1 ,y = 2 ,z = 3;
    int *p, *q, *r;   
    p = &x;
    q = &y;
    r = &z;
    printf("%d %d %d %p %p %p %d %d %d", x , y , z, p, q , r, *p, *q, *r);
    doiso(&x, &y, &z);
    printf("\n%d %d %d", x , y , z);
    doiso(p , q , r);
    printf("\n%p %p %p", q , p , r);
    return 0;
}