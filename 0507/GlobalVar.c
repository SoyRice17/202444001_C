#include <stdio.h>

int Add ();
int G_a;
int G_b;

int main (){
    int sum = 0;
    G_a = 10;
    G_b = 20;

    printf("\nOn Main\n");
    printf("Call Add\n");

    sum = Add();

    printf("\nOn Main\n");
    printf("Result : %d\n", sum);
}

int Add () {
    int sum = 0;
    
    printf("\nOn Add\n");
    sum = G_a + G_b;
    printf("Sum : %d + %d = %d\n", G_a, G_b, sum);
    
    return sum;
}