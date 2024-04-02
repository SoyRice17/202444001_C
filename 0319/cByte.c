#include <stdio.h>

int main() {
    short num1;
    int num2;
    long num3;
    long long num4;

    printf("자료형 크기 보는 함수 sizeof()\n");
    printf("short: %d\n", sizeof(num1));
    printf("int: %d\n", sizeof(num2));
    printf("long: %d\n", sizeof(num3));
    printf("long long: %d\n", sizeof(num4));
    printf("1바이트는 8비트\n");
    printf("short형 변수 %d비트\n", sizeof(short) * 8);
    printf("int형 변수 %d비트\n", sizeof(int) * 8);
    printf("long형 변수 %d비트\n", sizeof(long) * 8);
    printf("long long형 변수 %d비트\n", sizeof(long long) * 8);
    return 0;
    
    
}