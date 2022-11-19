#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    f1 = fopen("hello.txt", "r");
    f2 = fopen("hello-output.txt", "w");

    char c;
    while (fscanf(f1, "%c", &c) != EOF)
    {
        fprintf(f2, "%c", c);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}