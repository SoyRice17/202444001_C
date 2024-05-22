#include <stdio.h>

int main () {
    int N, max = -1, count = 0;
    
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[N - 1];
    count++;

    for (int i = N - 1; i >= 0; i--) {
        if(arr[i] > max) {
            max = arr[i];
            count++;
        }
    }

    printf("%d", count);
}