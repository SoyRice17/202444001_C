#include <stdio.h>

int main() {
    //입력받은 수를 끝으로 1부터 수까지 출력하기
    int num1;
    scanf("%d", &num1);
    while (1)
    {
        if (num1 == 0) {
            break;
        }
        printf("%d ", num1);
        num1--;
    }
    
    // for (int i = 1; i <= num1; i++) {
    //     printf("%d ", i);
    // }
    
}