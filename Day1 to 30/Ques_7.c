#include <stdio.h>

int main()
{

    int num;
    int product = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }

    printf("\nThe product of digits is: %d\n", product);

    return 0;
}