#include <stdio.h>
int main(){
    float epsilon;
    printf("Nhap so epsilon < 1: ");
    scanf("%f", &epsilon );
    int sum = 0;
    int i = 1;
    while(epsilon <= 0 || epsilon >= 1){
        do{
            sum = sum + 1/1*i;
            i++;
        }while(sum < epsilon);
        
    }
}