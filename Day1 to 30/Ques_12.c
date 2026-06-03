#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int lcm;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {

            printf("\nLCM of %d and %d is: %d\n", num1, num2, lcm);
            break;
        }

        lcm++;
    }

    return 0;
}
