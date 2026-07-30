#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 15;
    int b = 25;

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}