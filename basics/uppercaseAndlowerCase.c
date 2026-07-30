#include <stdio.h>

int main(){

    char inputStr[30];
    printf("Enter something: ");
    fgets(inputStr, sizeof(inputStr), stdin);

    int i = 0;
    int uprCase = 0;
    int lwrCase = 0;

    while(inputStr[i] != '\0'){
        if(inputStr[i] >= 'A' && inputStr[i] <= 'Z'){
            uprCase++;
        }
        else if(inputStr[i] >= 'a' && inputStr[i] <= 'z'){
            lwrCase++;
        }
        i++;
    }

    printf("Uppercase letters: %d\n", uprCase);
    printf("Lowercase letters: %d\n", lwrCase);


    return 0;
}