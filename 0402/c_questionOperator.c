#include <stdio.h>

int main(){
    int num1,num2,min,max;

    printf("두 개의 정수를 입력하세요: ");
    printf("첫 번째 정수: ");
    scanf("%d", &num1);

    printf("두 번째 정수: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;
    min = (num1 < num2) ? num1 : num2;

    printf("큰 수: %d\n", max);
    printf("작은 수: %d\n", min);
}