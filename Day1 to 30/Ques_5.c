#include <stdio.h>

int main()
{

    int num;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("\nThe sum of digits is: %d\n", sum);

    return 0;
}