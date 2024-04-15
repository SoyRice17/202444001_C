#include <stdio.h>
//https://www.acmicpc.net/problem/2525
int main () {
    int num1, num2,num3,sum;
    scanf("%d %d", &num1, &num2);
    scanf("%d", &num3);
    num1 *= 60;
    sum =num1 + num2 + num3;
    int finalH = sum / 60;
    int finalM = sum % 60;
    if (finalH >= 24) {
        finalH -= 24;
    }
    printf("%d %d", finalH, finalM);
}