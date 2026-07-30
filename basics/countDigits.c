#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "abc12345xyz";

    int i = 0;
    int count = 0;
   
    while (inputStr[i] != '\0'){
        if(inputStr[i] >= '0' && inputStr[i] <= '9'){
            count++;
        }

        i++;
    }

    printf("Digits count: %d", count);

    return 0;
}
