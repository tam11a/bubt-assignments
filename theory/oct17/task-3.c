#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter any string: ");
    scanf("%[^\n]", text);

    int i = 0, v = 0, c = 0;
    while (text[i])
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            switch (text[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                v++;
                break;
            default:
                c++;
            }
        i++;
    }
    printf("Total number of vowel = %d\n", v);
    printf("Total number of consonant = %d\n", c);
    return 0;
}