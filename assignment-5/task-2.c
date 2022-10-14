#include <stdio.h>
int main()
{
    int i;
    char arr[100];
    scanf("%[^\n]", &arr);
    for (i = 0; i < 100; i++)
    {
        printf("%c", arr[i]);
        if (arr[i] == '\0')
            break;
    }
    printf("String length = %d", i);
    return 0;
}