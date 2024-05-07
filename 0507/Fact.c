#include <stdio.h>

int Fact (int num);

int main () {
    int input;
    int result;

    printf("Enter the number: ");

    scanf("%d", &input);
    printf("Call Fact\n");

    result = Fact(input);

    printf("Result: %d! = %d\n",input , result);
}

int Fact (int num) {
    if (num == 1) {
        return 1;
    } else {
        printf("Process : %d! = %d * (%d - 1)\n", num, num,num);
        return num * Fact(num - 1);
    }
}