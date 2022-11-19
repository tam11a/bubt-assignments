#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    f1 = fopen("hello.txt", "w");

    char str[1000];
    scanf("%[^\n]", str);

    fprintf(f1, "%s", str);
    fclose(f1);
}