#include <stdio.h>

int main()
{
    int index[5];
    int marks[5];
    int passMark = 35;

    for(int i = 0; i < 5; i++){
        printf("Enter index: ");
        scanf("%d", &index[i]);

        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who passed the examination:\n");

    for(int i = 0; i < 5; i++){
        if(marks[i] >= passMark){
            printf("%d ", index[i]);
        }
    }
    printf("\nStudents who failed the examination:\n");

    for(int i = 0; i < 5; i++){
        if(marks[i] < passMark){
            printf("%d ", index[i]);
        }
    }

    return 0;
}
