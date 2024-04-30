#include <stdio.h>

int main () {
    int num;
    int even = 0;
    int odd = 0;
    while (1){
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        if(num % 2 == 0) {
            even++;
        }
        if(num % 2 == 1) {
            odd++;
        }
    }
    printf("홀수 : %d개, 짝수 : %d개", odd, even);
    return 0;
}