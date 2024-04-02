#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;
    while (num < 11)
    {
        sum += num;
        num++;
    }
    printf("1부터 10까지의 합 %d\n", sum);
    printf("while문이 끝난 후 num의값 = %d\n", num);
    return 0;
}