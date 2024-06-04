#include <stdio.h>

int main () {
    char *ps = "Spacezone";
    char sa[] = "Spacezone";
    int cnt;

    printf("배열선언 char sa[] = \"Spacezone\";\n");
    printf("포인터선언 char *ps = \"Spacezone\";\n\n");

    printf("배열 sa[]의 주소 = %d\n", sa);
    printf("포인터 ps의 주소 = %d\n\n", ps);

    printf("배열 sa[]의 메모리크기 = %d\n", sizeof(sa));
    printf("포인터 ps의 메모리크기 = %d\n\n", sizeof(ps));

    printf("배열사용 \t 포인터사용\n");
    for (cnt = 0; cnt < 9; cnt++) {
        printf("sd[%d] = %c \t *(ps + %d) = %c\n", cnt, sa[cnt], cnt, ps[cnt]);
    }
}