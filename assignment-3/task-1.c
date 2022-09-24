#include <stdio.h>
int main()
{
    int n, i, j, s, c;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (c = 1; c <= i; c++)
            printf("* ");

        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}