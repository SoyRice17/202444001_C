#include <stdio.h>

int main ( ) {
    int cnt, size, choice;

    char *task[] = {
        "Desk",
        "Computer",
        "Book",
        "USB",
        "EXIT"
    };
    printf("포인터 배열의 요소 선택(종료: 5)\n");

    size = sizeof(task) / sizeof(task[0]);

    for (cnt = 0; cnt < size; cnt++) {
        printf("%d : %s\n", cnt + 1, task[cnt]);
    }

    while(1){
        printf("번호를 선택하세요 : ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("입력 숫자 오류.\n");
            continue;
        }
        if (choice == 5) {
            printf("종료합니다.\n");
            break;
        }
        else {
            printf("선택한 작업 : %s\n", task[choice - 1]);
        }
    }
}