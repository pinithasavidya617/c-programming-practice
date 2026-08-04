#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "Hello";

    char *start = inputStr;
    char *end = inputStr + strlen(inputStr) - 1;

    char temp;

    while( start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("%s", inputStr);

    return 0;
}   