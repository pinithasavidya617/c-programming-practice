#include <stdio.h>

void changeFirstChar(char *str);

int main(){
    char stringInput[] = "Programming";

    changeFirstChar(stringInput);
    printf("%s", stringInput);


    return 0;
}

void changeFirstChar(char *str){
    *str = 'X';
}
