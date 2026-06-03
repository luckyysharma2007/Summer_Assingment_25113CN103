#include <stdio.h>

int main()
{
    int start;
    int end;
    int i, j;
    int isPrime;

    printf("\nEnter start of range: ");
    scanf("%d", &start);

    printf("\nEnter end of range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");

    
    return 0;
}
