#include <stdio.h>
#include <math.h>

int main()
{

    int start, end, num, temp, digit, n, sum;

    printf("\nEnter start of range: ");
    scanf("%d", &start);

    printf("\nEnter end of range: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++)
    {
        temp = num;
        n = 0;
        sum = 0;

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

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
