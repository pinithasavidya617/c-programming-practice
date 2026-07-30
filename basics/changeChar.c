#include <stdio.h>

void modify(char *str);

int main()
{
    char str[] = "Apple";
    modify(str);

    printf("%s", str);

    return 0;
}

void modify(char *str)
{
    *str = 'M';
}
