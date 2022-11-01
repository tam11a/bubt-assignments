#include <stdio.h>
#include <math.h>

int reverse(int num);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d", n, reverse(n));
    return 0;
}

int reverse(int num)
{
    return num ? (pow(10, (int)log10(num)) * (num % 10)) + reverse(num / 10) : 0;
}