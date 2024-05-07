#include <stdio.h>

void Start();

int main() {
    
    printf("Start 3times\n");
    Start();
    Start();
    Start();

    return 0;
}

void Start() {
    static int s_count = 0;
    int count = 0;
    printf("Static Count : %d\t Count : %d\n",s_count , count);
    s_count++;
    count++;
}