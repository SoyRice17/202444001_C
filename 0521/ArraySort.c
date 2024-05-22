#include <stdio.h>
#define AL 5

int main () {
    int list[AL] = {3, 2, 1, 5, 4};
    int temp,sort;

    printf("Before sorting: ");
    for (int i = 0; i < AL; i++) {
        printf("%d ", list[i]);
    }

    for (int i = 0; i < AL-1; i++){
        sort= i;
        for (int j = i+1; j < AL; j++){
            if (list[sort] > list[j]){
                sort = j;
            }
        }
        temp = list[i];
        list[i] = list[sort];
        list[sort] = temp;
    }
    printf("\nAfter sorting: ");
    for (int i = 0; i < AL; i++) {
        printf("%d ", list[i]);
    }
}