#include <stdio.h>

int main()
{

    int num;
    int i;
    int first = 0, second = 1;
    int next;

    printf("\nEnter how many terms: ");
    scanf("%d", &num);

    printf("\nFibonacci series: ");

    for (i = 1; i <= num; i++)
    {

        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
