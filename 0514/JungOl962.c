#include <stdio.h>
#define PI 3.14

float one (int r) {
    return r*r*PI;
}

int main () {
    int num = 0;
    scanf("%d",&num);
    float result = one(num);
    printf("%.2f",result);
}

