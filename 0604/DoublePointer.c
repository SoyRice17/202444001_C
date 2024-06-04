#include <stdio.h>

void creed(char **ppc);
void target(char **ppc);

int main ( ) {
    char *pc;

    printf("나의 생활 신조와 좌우명\n");

    creed(&pc);
    printf("나의 신조 : %s\n", pc);

    target(&pc);
    printf("나의 좌우명 : %s\n", pc);
    return 0;
}

void creed(char **ppc) {
    *ppc = "나는 무한한 가능성을 가진 사람이다.";
}
void target(char **ppc) {
    *ppc = "후회없는 삶을 살자.";
}