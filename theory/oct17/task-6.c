#include <stdio.h>

int main()
{
    char text[100], c;
    printf("Enter any string: ");
    scanf("%[^\n]", text);
    getchar();

    printf("Enter any character: (to search) ");
    c = getchar();

    printf("'%c' is found at index: ", c);

    int i = 0;
    while (text[i])
    {

        if (text[i] == c)
            printf(" %d", i);
        i++;
    }

    printf("\n");
    return 0;
}