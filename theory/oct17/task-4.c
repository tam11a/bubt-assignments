#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter any string: ");
    scanf("%[^\n]", text);

    int i = 0, v = 0, c = 0;
    while (text[i])
    {
        if ((text[i] >= 'a' && text[i] <= 'z'))
            text[i] -= 32;
        i++;
    }
    printf("Uppercase string : %s\n", text);
    return 0;
}