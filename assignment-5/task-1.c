#include <stdio.h>
int main()
{
    int SIZE;
    printf("Enter Array Size: ");
    scanf("%d", &SIZE);

    printf("Enter Array: ");
    int arr[SIZE], i;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0, secondMax = 0;
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }

    printf("2nd Largest Value in Array: %d\n", secondMax);
    return 0;
}
