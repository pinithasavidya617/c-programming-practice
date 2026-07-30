#include <stdio.h>
#include <string.h>

int main(){

    char inputStr[] = "programming";

    int i = 0;
    int count = 0;
   
    while (inputStr[i] != '\0'){
        if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i'
        || inputStr[i] == 'o' || inputStr[i] == 'u'  ){
            count ++;
        }

        i++;
    }

    printf("Vowel count: %d", count);

    return 0;
}
