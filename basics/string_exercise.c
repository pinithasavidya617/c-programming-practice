#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Programming";
    char str2[] = "hello world";
    char str3[] = "HeLLo WoRLD";

    char copyStr[] = "Computer";
    char getCopied[20];

    char strApple1[] = "Apple";
    char strApple2[] = "Apple";
    char strBanana[] = "Banana";




    printf("Length of String: %d\n", strlen(str1));
    printf("Uppercase of String: %s\n", strupr(str2));
    printf("Lowercase of String: %s\n", strlwr(str3));

    strcpy(getCopied, copyStr);
    printf("Copied: %s", getCopied);

    printf("%d", strcmp(strApple1, strApple2));
    printf("%d", strcmp(strApple1, strBanana));

    if(strcmp(strApple1, strApple2) == 0){
    printf("Strings are Equal\n");

    }else{
    printf("Strings are Different\n");
    }


    if(strcmp(strApple1, strBanana) == 0)
{
    printf("Strings are Equal\n");
}
else
{
    printf("Strings are Different\n");
}




    return 0;
}