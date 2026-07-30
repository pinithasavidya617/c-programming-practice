#include <stdio.h>
#include <string.h>

int main(){

    char inputStr1[20] = "hello";
    char inputStr2[] = "world";

    strcat(inputStr1, inputStr2);

    printf("%s", inputStr1);
    
    return 0;
}
