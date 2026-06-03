#include <stdio.h>

int main()
{
    int num;
    int i;
    int first = 0, second = 1;
    int next;

    printf("\nEnter the term number (n): ");
    scanf("%d", &num);

    if (num == 1)
    {

        printf("\nFibonacci term %d = %d\n", num, first);
    }
    else if (num == 2)
    {
        printf("\nFibonacci term %d = %d\n", num, second);
    }
    else
    {
        for (i = 3; i <= num; i++)
        {
            next = first + second; 
            first = second;        
            second = next;         
        }
        printf("\nFibonacci term %d = %d\n", num, second);
    }

    return 0;
}
