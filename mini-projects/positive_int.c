#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);


    for(int i = 0; i <= num; i++){
        sum = sum + i;
    }

    printf("The sum of the range 0 - %d is: %d", num, sum);

    return 0;
}
