#include <stdio.h>

int moreBig (int x, int y) {
    return (x > y) ? x : y;
}

int main () {
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", moreBig(x,y));
    return 0;
}