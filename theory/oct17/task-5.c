#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter any string: ");
    scanf("%[^\n]", text);

    int i, len = 0;
    while (text[++len]) // calculate length
        ;

    for (i = 0; i < len / 2; i++)
    {
        char temp = text[i];
        text[i] = text[len - 1 - i];
        text[len - 1 - i] = temp;
    }

    printf("Reverse string : %s\n", text);
    return 0;
}