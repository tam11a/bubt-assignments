#include <stdio.h>
int main()
{
    int i;
    char arr[100];
    printf("Enter a string: ");
    scanf("%[^\n]", arr);
    for (i = 0; i < 100; i++)
    {
        printf("%c", arr[i]);
        if (arr[i] == '\0')
            break;
    }
    printf("\nString length = %d\n", i);
    return 0;
}