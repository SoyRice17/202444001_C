#include <stdio.h>

int main() {
    int num;

    printf("모양을 선택하세요 (1, 2, 3, 4): ");
    scanf("%d", &num);

    if (num == 1) {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else if (num == 2) {
        for (int i = 5; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    } else if (num == 3) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (j >= i) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    } else if (num == 4) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i + j >= 4) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    } else {
        printf("잘못된 입력입니다. 1, 2, 3, 4 중에서 입력하세요.\n");
    }

    return 0;
}
