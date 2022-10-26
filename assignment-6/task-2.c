#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After swapping: \n");
    printf("Enter first number: %d\n", a);
    printf("Enter second number: %d\n", b);

    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
