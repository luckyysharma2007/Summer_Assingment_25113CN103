#include <stdio.h>
#include <math.h>

int main()
{

    long long binary;
    int decimal = 0;
    int base = 1;
    int remainder;

    printf("\nEnter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0)
    {

        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("\nDecimal: %d\n", decimal);

    return 0;
}
