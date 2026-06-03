#include <stdio.h>

int main()
{

    int num;
    int reverse = 0;
    int original_num;
    int digit;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    original_num = num;

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }

    if (original_num == reverse)
    {
        printf("\nThe number is a palindrome.\n");
    }
    else
    {
        printf("\nThe number is not a palindrome.\n");
    }

    return 0;
}
