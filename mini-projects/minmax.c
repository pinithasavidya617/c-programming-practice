#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[50];
    int max, min;
    int lower = 0, upper = 1000;

    srand(time(0));
    printf("Array Elements:\n");

    for(int i = 0; i < 50; i++){
        arr[i] = (rand() % (upper - lower + 1)) + lower;
        printf("%d", arr[i]);

        if(i < 49)
            printf(",");
        if(i == 0){
            max = arr[i];
            min = arr[i];
        }else{
            if(arr[i] > max)
                max = arr[i];

            if(arr[i] < min)
                min = arr[i];
        }
    }

    printf("\n\nMaximum Value: %d", max);
    printf("\nMinimum Value: %d", min);

    return 0;
}
