#include <stdio.h>

int main()
{

    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("The multiplication table of %d is: \n", num);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}