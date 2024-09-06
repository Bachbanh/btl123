#include <stdio.h>
#include <string.h>
#include <ctype.h>

int xaukitu(char a[]) {
   
    if (strlen(a) > 10) {
        return 0;
    }

    int hasAlpha = 0, hasSpecial = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isalpha(a[i])) {
            hasAlpha = 1;
        } else if (strchr("!@#$%^&*", a[i]) != NULL) {
            hasSpecial = 1;
        }
    }

    if (hasAlpha && hasSpecial) {
        printf("1");
    } else {
        printf("0");
    }
}

int main() {
    char a[] = "Abc123!@)";
      if (checkString(a)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
    return 0;
}