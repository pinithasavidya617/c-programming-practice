#include <stdio.h>

int maximum(int, int);

int main(){
    int result = maximum(6,9);
    printf("%d", result);
    return 0;
}

int maximum(int a, int b){
    int max = (a > b) ? a : b;
    return max;
}