#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("hello.txt", "r");
    char c;
    while (fscanf(f, "%c", &c) != EOF)
    {
        printf("%c", c);
    }
    fclose(f);
    return 0;
}