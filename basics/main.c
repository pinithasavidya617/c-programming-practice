#include <stdio.h>

int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
    int result = add(5, 10);
    printf("The result is: %d\n", result);
    return 0;
}