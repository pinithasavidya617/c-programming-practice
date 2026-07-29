#include <stdio.h>

int square(int n);

int main(){

    int result = square(6);
    printf("%d", result);

    return 0;
}

int square(int n){
    return n * n;
}