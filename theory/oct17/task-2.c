#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int i, j;
    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
            {
                c++;
                break;
            }

    printf("Answer: %d\n", c);
    return 0;
}
