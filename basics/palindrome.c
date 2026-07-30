#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[30];
    printf("Type a word: ");
    // fgets(inputStr, sizeof(inputStr), stdin);
    scanf("%s", inputStr);

    int i = 0;
    int j = strlen(inputStr) - 1;

    while(i < j){

        if( inputStr[i] != inputStr[j]){
            printf("Not a palindrome");
            return 0;
        }

        i++;
        j--;

    }

    printf("Palindrome");


    return 0;

}