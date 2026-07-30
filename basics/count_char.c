#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "programming";

    int i = 0;
    int count = 0;
    
    while(inputStr[i] != '\0'){
        count++;
        i++;
    }

    printf("Characters: %d", count);

    return 0;
}
