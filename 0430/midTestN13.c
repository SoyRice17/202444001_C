#include <stdio.h>

int main () {
    int num,count = 0,sum = 0;
    while (1)
    {
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        if (num % 2 == 1) {
            sum += num;
            count++;
        }
    }
    printf("홀수의합 : %d, 홀수의 평균 : %d", sum, sum/count);
}