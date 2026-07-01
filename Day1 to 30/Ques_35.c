#include <stdio.h>

int main()
{

    int rows;
    int i;
    int j;
    char ch;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    ch = 'A';

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= i; j++)
        {

            printf("%c", ch);
        }

        printf("\n");

        ch++;
    }

    return 0;
}
