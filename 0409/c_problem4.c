#include <stdio.h>

int main () {
    int num1=-1,sum=0,count=0,val=0;
    while (num1 != 0){
        scanf("%d",&num1);
        count++;
        if(!(num1%4==0&&num1%3==0)){
            sum+=num1;
        }
    }
    val = sum/(count-1);
    printf("%d\n",count);
    printf("%d\n",sum);
    printf("%d\n",val);
}