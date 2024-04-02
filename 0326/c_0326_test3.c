#include <stdio.h>
/*int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int remian(int a, int b);

int main() {

    int num,num2,num3,num4,num5;
    printf("5개의 정수를 입력하세요: ");
    scanf("%d %d %d %d %d", &num, &num2, &num3, &num4, &num5);
    printf("%d ",plus(num,3));
    printf("%d ",minus(num2,3));
    printf("%d ",multi(num3,3));
    printf("%d ",divide(num4,3));
    printf("%d\n",remian(num5,3));
    return 0;
}

int plus(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}
int multi(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}
int remian(int a, int b) {
    return a % b;
}*/
int main() {
    int num1, num2, num3, num4, num5;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("%d %d %d %d %d", num1 + 3, num2 - 3, num3 * 3, num4 / 3, num5 % 3);
}