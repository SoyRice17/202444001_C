#include <stdio.h>

int main () {
    int len = 0;
    int sum = 0;
    char num[100];
    scanf("%d", &len);
    scanf("%s", num);
    for(int i = 0; i < len; i++) {
        sum += num[i] - '0';
    }
    printf("%d", sum);
}