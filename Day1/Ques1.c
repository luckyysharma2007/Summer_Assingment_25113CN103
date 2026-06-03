#include <stdio.h>

int main()
{

    int num;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("\nThe sum of first %d natural numbers is: %d", num, sum);

    return 0;
}