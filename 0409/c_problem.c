#include <stdio.h>

int main () {
    int num1,num2;
    printf("Enter the number: ");
    scanf("%d", &num1); //5
    
    num2 = num1 - 1; //4
    
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = num1 - 2; i >= 0; i--) {
        for (int j = 0; j < num2 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}