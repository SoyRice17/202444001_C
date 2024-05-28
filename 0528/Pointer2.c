#include <stdio.h>

int main() {

    int a[10] = {10,20,30,40,50,60,70,80,90};
    int *pi;
    pi = a;
    printf("pi의 주소 = %d\n", pi);
    printf("*pi++ = %d\n", *pi++);
    printf("*pi++ after p의 주소 = %d\n", pi);
    printf("(*pi)++ = %d\n", (*pi)++);
    printf("*pi = %d\n\n", *pi);

    printf("*++pi = %d\n", *++pi);
    printf("pi의 after 주소 = %d\n", pi);
    printf("++*pi = %d\n", ++*pi);
}