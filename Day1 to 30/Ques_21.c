#include <stdio.h>

int main()
{

    int num;

    printf("\nEnter a decimal number: ");
    scanf("%d", &num);

    printf("\nBinary: ");

    for (int i = sizeof(num) * 8 - 1; i >= 0; i--)
    {
        int bit = (num >> i) & 1; 
        {

            for (; i >= 0; i--)
            {
                printf("%d", (num >> i) & 1);
            }
            break;
        }
    }

    printf("\n");


    return 0;
}
