#include <stdio.h>
#define MAX_NIUMBERS 100
#define RANGE 10

void readNumbers(int numbers[], int n);
void calculateFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main(){
    int N = 10;
    //printf("Enter the number of elemets (up to %d) : ",MAX_NIUMBERS);
    //scanf("%d",&N);
    //변수로 범위 지정 불가능

    if (N < 1 || N > MAX_NIUMBERS) {
        printf("vaild number of elements between 1 and %d\n",MAX_NIUMBERS);
        return 1;
    }
    int numbers[10];
    readNumbers(numbers,N);

    int frequncy[RANGE] = {0};
    calculateFrequency(numbers,N,frequncy);

    printFrequency(frequncy,RANGE);

    return 0;
}

void readNumbers(int numbers[], int n){
    printf("Enter %d numbers : (0-9)",n);
    for (int i = 0; i < n; i++){
        scanf("%d",&numbers[i]);
        if (numbers[i] < 0 || numbers[i] > 9){
            printf("Invalid number : %d. Enter a number between 0 and 9\n",numbers[i]);
            i--;
        }
    }
}

void calculateFrequency(int numbers[], int n, int frequency[]){
    for (int i = 0; i < n; i++){
        frequency[numbers[i]]++;
    }
}

void printFrequency(int frequency[], int range){
    for (int i = 0; i < range; i++){
        printf("Number %d : %d times\n",i,frequency[i]);
    }
}