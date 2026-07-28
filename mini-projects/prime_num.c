#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num <= 1){
        isPrime = 0;
    }
    else{
        for(int i = 2; i < num; i ++){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1){
        printf("It is a prime number!");
    }
    else{
        printf("It is not a prime number!");
    }

    return 0;
}
