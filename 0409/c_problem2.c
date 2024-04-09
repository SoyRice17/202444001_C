#include <stdio.h>

int main () {
    int num1,num2,min;
    scanf("%d %d", &num1, &num2);
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    while (1){
        if ((num1*num1)%2 == 0 || (num2*num2)%3 == 0) {
            printf("true");
        } else {
            printf("false");
            break;
        }
    }
    
}