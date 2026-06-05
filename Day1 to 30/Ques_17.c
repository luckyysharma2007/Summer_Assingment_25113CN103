#include <stdio.h>

int main()
{

    int num;
    int i;
    int sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {

        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is Not a Perfect number\n", num);

        
    return 0;
}
