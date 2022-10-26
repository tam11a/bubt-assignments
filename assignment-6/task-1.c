#include <stdio.h>

int sum(int *p, int *q);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("summation is %d\n", sum(&a, &b));
    return 0;
}

int sum(int *p, int *q)
{
    return *p + *q;
}
