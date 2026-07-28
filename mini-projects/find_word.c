#include <stdio.h>
#include <string.h>

int findWord(char sentence[], char word[])
{
    int i, j;
    for(i = 0; sentence[i] != '\0'; i++){
        j = 0;
        while(word[j] != '\0' && sentence[i + j] == word[j]){
            j++;
        }

        if(word[j] == '\0'){
            return i;
        }
    }

    return -1;
}

int main()
{
    char sentence[500];
    char word[100];
    int result;

    printf("Enter a Sentence or Paragraph: ");
    gets(sentence);

    printf("Enter a word to be searched: ");
    gets(word);

    result = findWord(sentence, word);

    if(result == -1){
        printf("Word not found");
    }else{
        printf("The first occurrence of the word in the paragraph is: %d", result);
    }

    return 0;
}
