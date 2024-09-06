#include<stdio.h>
void min(int *a, int *b, int *c , int *d){
    int min = *a;
    if(min > *b){
        min = *b;
    } 
    if(min > *c){
        min = *c;
    }
    if( min > *d){
        min = *d;
    }
    printf("%d", min);
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a ,&b ,&c, &d);
    min(&a,&b,&c,&d);
}