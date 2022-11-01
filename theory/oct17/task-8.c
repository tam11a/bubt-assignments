
#include <stdio.h>

void evenOdd(int num, int last);

int main()
{
    int start, end;
    printf("Enter lower & upper limit: ");
    scanf("%d %d", &start, &end);
    printf("Even or Odd Numbers are: ");
    evenOdd(start, end);
    return 0;
}

void evenOdd(int num, int last)
{
    if (num > last)
        return;

    printf("%d ", num);
    evenOdd(num + 2, last);
}