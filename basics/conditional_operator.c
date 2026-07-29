#include <stdio.h>
int main(){

    int num1;
    int num2;
    int maximum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    maximum = (num1 > num2) ? num1 : num2;

    printf("Maximum : %d", maximum);


    return 0;
}