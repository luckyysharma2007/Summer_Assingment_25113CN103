#include <stdio.h>

int main()
{
    int rows, i, j, space;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        for (ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }

        for (ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
