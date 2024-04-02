#include <stdio.h>

int main() {

    int num1,num2;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op) {
        case '+':
            printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
            break;
        case '/':
            printf("%d %c %d = %d\n", num1, op, num2, num1 / num2);
            break;
        default:
            printf("잘못된 연산자입니다.\n");
        return 0;
    }
}