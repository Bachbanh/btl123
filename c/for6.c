#include <stdio.h>
/*
INPUT
5
OUTPUT
55555
54444
54333
54322
54321
*/


int main() {
    int n, i, j;
    
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    
    for (i = n; i > 0; i--) {
        for (j = n; j > 0; j--) {
            if (j > i)
                printf("%d", j);
            else
                printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
