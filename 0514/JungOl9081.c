#include <stdio.h>

void line();

int main() {
    line();
    printf("line 함수를 호출하였습니다.\n");
    printf("line 함수를 다시 호출합니다.\n");
    line();
    return 0;
}




void line(){
    printf("==============================\n");
}