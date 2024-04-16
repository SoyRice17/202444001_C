#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1;
    scanf("%d", &num1);
    char num2 [100];
    scanf("%s", num2);
    printf("%d\n", num1 * (num2[2] - '0'));
    printf("%d\n", num1 * (num2[1] - '0'));
    printf("%d\n", num1 * (num2[0] - '0'));
    printf("%d\n", num1 * atoi(num2));
}