#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, sum = 0, digit, n = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;

    while (temp > 0)
    {
        temp = temp / 10;
        n++;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, n);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);


    return 0;
}
