#include <stdio.h>

int main () {
    int a = 0, sum = 0;
    printf("과목의 갯수를 입력하시오 : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        float b = 0;
        printf("학점을 입력하세요 : ");
        scanf("%d", &b);
        
        if(b==4.5){
            sum+=100;
        }
        else {
            sum+=(b*10+54);
        }
    }
    printf("학점의 평균은 %d 입니다.", sum/a);
    
}