#include <stdio.h>

int main () {
    int score;
    char grade;
    printf("점수를 입력하세요: ");
    scanf("%d", &score);
    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    printf("학점: %c\n", grade);
    //%d를 넣으면 아스키코드 환산 정수가 나옴
    //대문자 +32를 하면 그 문자의 소문자가 나옴
}