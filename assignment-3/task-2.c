#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i, x = 0, y = 1, temp;
    printf("The first %d Fibonacci numbers are:", n);
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf(" %d", x);
        }
        else if (i == 1)
        {
            printf(" %d", y);
        }
        else
        {
            temp = x + y;
            x = y;
            y = temp;
            printf(" %d", temp);
        }
    }
    return 0;
}