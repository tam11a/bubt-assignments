#include <stdio.h>
void getGrade(int num);

int main()
{
    int num;
    scanf("%d", &num);
    printf("The grade is: ");
    getGrade(num);
    return 0;
}

void getGrade(int num)
{
    switch (num / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        switch (num % 10)
        {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("A");
            break;

        default:
            printf("A-");
            break;
        }
        break;
    case 6:
        switch (num % 10)
        {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("B+");
            break;

        default:
            printf("B");
            break;
        }
        break;
    case 5:
        switch (num % 10)
        {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("B-");
            break;

        default:
            printf("C+");
            break;
        }
        break;
    case 4:
        switch (num % 10)
        {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("C");
            break;

        default:
            printf("D");
            break;
        }
        break;
    default:
        printf("F");
        break;
    }
    printf("\n");
}
