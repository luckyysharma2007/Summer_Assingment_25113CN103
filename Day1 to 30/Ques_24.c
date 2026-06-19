#include <stdio.h>

int main()
{

    int x;
    int n;
    long long result = 1;

    printf("\nEnter base (x): ");
    scanf("%d", &x);

    printf("\nEnter exponent (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        result *= x;
    }

    printf("\n%d^%d = %lld\n", x, n, result);

    return 0;
}
