#include <stdio.h>

int main (){
    int num = 0;
    scanf("%d", &num);
    if (num < 0){
        return 1;
    }
    for (int i = 1; i <= 9; i++) {
        printf("%d 단\n", num);
        printf("%d * %d = %d\n", num, i, num * i);
    }
}