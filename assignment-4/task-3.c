#include <stdio.h>
#include <math.h>
int func(int x, int y);

int main()
{
    int num1, num2;
    printf("Enter the values of x & y: ");
    scanf("%d %d", &num1, &num2);
    printf("The result is: %d\n", func(num1, num2));
    return 0;
}

int func(int x, int y)
{
    return pow(x, y) + pow(y, x);
}
