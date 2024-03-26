#include <stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divide(int a, int b);

int main() {
    int num1 = 10, num2 = 20;
    int result = 0;
    result = plus(num1, num2);
    printf(("%d + %d = %d\n"), num1, num2, result);
    result = minus(num1, num2);
    printf(("%d - %d = %d\n"), num1, num2, result);
    result = multi(num1, num2);
    printf(("%d * %d = %d\n"), num1, num2, result);
    result = divide(num1, num2);
    printf(("%d / %d = %d\n"), num1, num2, result);
    return 0;

    /* 
    printf(("%d + %d = %d\n"), num1, num2, plus(num1, num2));

    printf(("%d - %d = %d\n"), num1, num2, minus(num1, num2);
    
    printf(("%d * %d = %d\n"), num1, num2, multi(num1, num2);

    printf(("%d / %d = %d\n"), num1, num2, divide(num1, num2);
    */
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
