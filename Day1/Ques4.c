#include <stdio.h>

int main()
{

    int num;
    int count = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else if (num < 0)
    {
        num = -num;
    }
    else if (num > 0)
    {
        while (num > 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}