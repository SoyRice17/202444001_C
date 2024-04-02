#include <stdio.h>

int main() {
    int num1 = 0;
    printf("단을 입력하세요 : ");
    scanf("%d", &num1);
    int i = 1;
    while (i < 10) {
        printf("%d * %d = %d\n", num1, i, num1 * i);
        i++;
    }

    return 0;
}