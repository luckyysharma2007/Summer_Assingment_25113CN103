#include <stdio.h>

int main()
{

    int num;
    int original;
    int sum = 0;
    int digit;
    int fact;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;

        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original)
        printf("\n%d is a Strong number\n", original);
    else
        printf("\n%d is Not a Strong number\n", original);


    return 0;
}
