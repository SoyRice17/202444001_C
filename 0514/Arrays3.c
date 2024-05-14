#include <stdio.h>
#define CNt 9

void array_1(int a[], int cnt ){ //cnt 부분이 사실 필요없음 전역상수 사용하면 됨 ,  
    for(int i = 0; i < cnt; i++){ // 만약 cnt 부분을 CNt로 바꾸게 되면 int 9 로바뀌기 때문에 오류가 발생함
        a[i] += 1;
    }
}

int main () {
    int a[10] = {1,2,3,4,5,6,7,8,9};
    printf("Before\n");
    for(int i = 0; i < CNt; i++){
        printf("%d",a[i]);
    }
    printf("\n");
    array_1(a,CNt);
    printf("After\n");
    for(int i = 0; i < CNt; i++){
        printf("%d",a[i]);
    }
    return 0;
}