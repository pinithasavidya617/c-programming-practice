#include <stdio.h>
#include <string.h>
void swap(int *a, int *b);

int main(){
    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("X : %d | Y : %d ", x,y);


    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
