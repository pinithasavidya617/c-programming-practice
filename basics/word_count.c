#include <stdio.h>

int main(){

    char inputStr[30];
    printf("Enter something: ");
    fgets(inputStr, sizeof(inputStr), stdin);

    int i = 0;
    int wrd = 1;
    // Spaces = words + 1

    while (inputStr[i] != '\0'){
        if (inputStr[i] == ' ')
        {
            wrd++;
        }
        i++;
        
    }

    printf("Number of words : %d", wrd);



    return 0;
}