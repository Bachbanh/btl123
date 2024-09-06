#include <stdio.h>
#include<math.h>
void Mu(int x,int y){
    int sum = 1;
    for(int i = 1; i <= y ; i++){
        sum = sum * x;
    }
    printf("%d", sum);
}
int main(){
    int x,y;
    scanf("%d%d", &x,&y);
    Mu(x,y);
}