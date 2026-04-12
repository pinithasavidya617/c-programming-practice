#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, area, circumference;
    const float pi = 3.14159;

    printf("Area and the Circumference Calculator\n");
    printf("--------------------------------------\n");

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area : %.2f \n", area);
    printf("Circumference : %.2f \n", circumference);

    return 0;
}
