#include <stdio.h>

void printStars(int n);

int main(){
    printStars(5);
    return 0;
}

void printStars(int n){
    for(int i = 1;i <= n; i++ ){
        printf("*");
    }
}