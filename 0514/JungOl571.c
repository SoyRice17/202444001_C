#include <stdio.h>

void text(int num) {
    for (int i = 0; i < num; i++){
        printf("~!@#$^&*()_+|\n");
    }
}
int main () {
    int num;
    scanf("%d",&num);
    text(num);
}