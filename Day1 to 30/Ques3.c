#include <stdio.h>

int main()
{

    int num;
    int factorial = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("The factorial of %d is: %d\n", num, factorial);

    return 0;
}