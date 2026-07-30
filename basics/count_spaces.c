#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "I love C programming";
    int spaces = 0;
    
    int len = strlen(inputStr);

    for(int i = 0; i < len; i++){
        if(inputStr[i] == ' '){
            spaces++;
        }
    }

    printf("Spaces: %d", spaces);

    return 0;
}
