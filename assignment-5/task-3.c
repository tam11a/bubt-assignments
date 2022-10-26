#include <stdio.h>
int main()
{
    int i, freq = 0;
    char arr[100];
    char toCountFreq;
    printf("Enter a string: ");
    scanf("%[^\n]", arr);
    getchar();
    printf("Enter a character: ");
    scanf("%c", &toCountFreq);
    for (i = 0; i < 100; i++)
    {
        if (arr[i] == toCountFreq)
            freq++;
        if (arr[i] == '\0')
            break;
    }
    printf("frequency of the character = %d\n", freq);
    return 0;
}