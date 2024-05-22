#include <stdio.h>

int main () {
    int suNo;
    scanf("%d", &suNo);
    int A[suNo];
    int S[suNo];
    for (int i = 0; i < suNo; i++) {
        scanf("%d", &A[i]);
    }
    S[0] = A[0]; 
    for (int i = 1; i < suNo; i++) { 
        S[i] = S[i-1] + A[i];
    }
    for (int i = 0; i < suNo; i++) {
        printf("%d ", S[i]);
    }
}

// int main () {
//     int suNo;
//     scanf("%d", &suNo);
//     int A[suNo];
//     int S[suNo];
//     for (int i = 0; i < suNo; i++) {
//         scanf("%d", &S[i]);
//     }
//     for (int i = 0; i < suNo; i++) {
//         A[i] = 0;
//         for (int j = 0; j <= i; j++) {
//             A[i] += S[j];
//         }
//     }
//     for (int i = 0; i < suNo; i++) {
//         printf("%d ", A[i]);
//     }
// }