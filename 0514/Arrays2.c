#include <stdio.h>
#define DT 3

int main () {
    int arr[DT];
    int cnt, sum = 0;
    float avg = 0;

    for (cnt = 0; cnt < DT; cnt++) {
        printf("과목%d 점수 : ___\b\b\b",cnt+1);
        scanf("%d", &arr[cnt]);
        sum += arr[cnt];
    }

    avg = (float)sum / DT;

    printf("총점 : %d\n",sum);
    printf("평균 : %.2f\n",avg);
}