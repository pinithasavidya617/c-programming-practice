#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Factorial of a negative number doesn't exist.");
    }else{
       for(int i = 1; i <= num; i ++){
        factorial = factorial * i;
       }
       printf("The factorial of %d is: %ld", num, factorial);

    }
    return 0;
}
