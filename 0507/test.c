#include <stdio.h>

int method (int *pointer);

int main (){
    int num = 100;
    int call;

    printf("Before: %d\n", num);

    call = method(&num);
    
    printf("After: %d\n", num);
    printf("Return: %d\n", call);
}

int method (int *pointer) {
    *pointer = 200;
    return 0;
}