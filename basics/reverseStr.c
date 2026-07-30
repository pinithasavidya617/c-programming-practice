#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "Hello";

    int i = 0;
    int j = strlen(inputStr) - 1;

    char temp;
    
    while(i < j){
        temp = inputStr[i];
        inputStr[i] = inputStr[j];
        inputStr[j] = temp;
        i++;
        j--;
    }

    printf("%s", inputStr);



    return 0;
}
