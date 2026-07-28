#include <stdio.h>
#include <limits.h>

int main() {

    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %u\n\n", UCHAR_MAX);

    printf("signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n\n", USHRT_MAX);

    printf("signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n\n", UINT_MAX);

    printf("signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);

    return 0;
}
