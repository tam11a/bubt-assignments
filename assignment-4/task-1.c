#include <stdio.h>
int intreverse(int n);

int main()
{
    int num;
    scanf("%d", &num);
    int revNumber = intreverse(num);
    printf("%d\n", revNumber);
    return 0;
}

int intreverse(int n)
{
    int rev = 0;
    while (n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
