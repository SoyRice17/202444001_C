#include <stdio.h>

int printNum (int num);

int main () {
    int input;
    int result;

    printf("Enter the number: ");

    scanf("%d", &input);

    printNum(input);
}

int printNum (int num) {
    if (num == 0) {
        return 0;
    } else {
        printf("%d\n", num);
        return printNum(num - 1);
    }
}