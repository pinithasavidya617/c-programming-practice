#include <stdio.h>

int main() {

    int a = 10;
    float b = 3.7;
    double c = 5.89;

    printf("Integer, Float, Double Conversions\n");

    printf("int to float: %.2f\n", (float)a);
    printf("float to int: %d\n", (int)b);
    printf("double to int: %d\n", (int)c);
    printf("int to double: %.2lf\n\n", (double)a);


    char ch = 'A';
    int num = 69;

    printf("Character and Integer Conversions\n");

    printf("char to int: %d\n", (int)ch);
    printf("int to char: %c\n\n", (char)num);


    int x = 5, y = 2;
    float result;

    printf("Casting in Expressions \n");

    result = x / y;
    printf("x / y = %.2f\n", result);

    result = (float)x / y;
    printf("(float)x / y = %.2f\n", result);

    result = x / (float)y;
    printf("x / (float)y = %.2f\n", result);

    result = (float)(x / y);
    printf("(float)(x / y) = %.2f\n\n", result);


    printf("Conversion Summary Table\n");
    printf("Original Type | Value | Converted To | Result\n");
    printf("------------------------------------------------\n");

    printf("int           | %d    | float        | %.2f\n", a, (float)a);
    printf("float         | %.1f  | int          | %d\n", b, (int)b);
    printf("char          | '%c'  | int          | %d\n", ch, (int)ch);

    return 0;
}
