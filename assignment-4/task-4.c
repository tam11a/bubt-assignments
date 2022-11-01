#include <stdio.h>
#include <math.h>

int power(int x);
long long summation(int p);

int main()
{
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);
    printf("The sum of the series is: %lld\n", summation(num));
    return 0;
}

int power(int x)
{
    return pow(x, x);
}

long long summation(int p)
{
    long long ans = 0;
    while (p)
        ans += power(p--);
    return ans;
}
