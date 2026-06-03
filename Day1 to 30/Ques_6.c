#include <stdio.h>

int main()
{

    int num;
    int reverse = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }

    printf("\nThe reverse of the number is: %d\n", reverse);
    

    return 0;
}