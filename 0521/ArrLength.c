#include <stdio.h>

int main () {
    char str[20];
    int cnt, legnth = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (cnt = 0; str[cnt] != '\0'; cnt++) {
        legnth++;
    }

    printf("\n");

    printf("Length of the string: %d\n", legnth);
    return 0;
}