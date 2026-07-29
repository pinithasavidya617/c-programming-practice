#include <stdio.h>

int main (){
    int mark = 68;

    if(mark >= 75 && mark <= 100){
        printf("Grade A");
    }
    else if(mark >= 65){
        printf("Grade B");
    }
    else if(mark >= 50){
        printf("Grade C");
    }
    else if(mark >= 35){
        printf("Grade S");
    }
    else{
        printf("Grade F");
    }

    return 0;
}