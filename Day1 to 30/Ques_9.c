#include <stdio.h>

int main()
{

    int num;
    int isPrime = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("\nThe number is neither prime nor composite.\n");
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("\nThe number is prime.\n");
        }
        else
        {
            printf("\nThe number is composite.\n");
        }
    }

    return 0;
}