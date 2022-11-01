#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("LCM of %d and %d is %d\n", n1, n2, n2 > n1 ? lcm(n1, n2) : lcm(n2, n1));
    return 0;
}

int lcm(int a, int b)
{
    static int m = 0;
    m += b;
    return !(m % a) && !(m % b) ? m : lcm(a, b);
}