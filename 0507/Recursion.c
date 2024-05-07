#include <stdio.h>

int sumRepeat (int num);

int main () {
    int input;
    int result;

    printf("Enter the number: ");

    scanf("%d", &input);
    printf("Call sumRepeat\n");

    result = sumRepeat(input);

    printf("Result: 1 + 2 + ... + %d = %d\n",input , result);
}

int sumRepeat (int num) {
    if (num == 1) {
        return 1;
    } else {
        return num + sumRepeat(num - 1);
    }
}