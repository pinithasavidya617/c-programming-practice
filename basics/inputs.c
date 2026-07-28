#include <stdio.h>

#define UNIVERSITY "University of Sri Jayewardenepura"

int main(){
    char name[40];
    int age;
    float height;
    char grade;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    
    printf(UNIVERSITY "\n");
    printf("------ Student Details ------ \n");
    printf("Name : %s \n", name);
    printf("Age : %d \n", age);
    printf("Height : %f \n", height);
    printf("Grade : %c \n", grade);
    
    printf("ASCII value of Grade = %d\n", grade);

    
    return 0;
}