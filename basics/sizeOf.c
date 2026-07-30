#include <stdio.h>


int main(){
    int arr[] = {10,20,30,40};
    int *p = arr;

    printf("Size of array: %d\n", sizeof(arr));
    printf("Size of pointer: %d\n", sizeof(p));
    printf("Size of value pointed by pointer: %d", sizeof(*p));

   
    return 0;
}


