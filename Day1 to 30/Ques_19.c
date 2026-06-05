#include <stdio.h>

int main()
{

    int num;
    int i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nFactors of %d are: ", num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
