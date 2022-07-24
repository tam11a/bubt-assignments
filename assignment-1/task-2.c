#include <stdio.h>
int main()
{
    float inCel;
    printf("Enter the Celsius value: ");
    scanf("%f", &inCel);
    printf("The Fahrenheit value is: %.1f\n", inCel * 9 / 5 + 32); // as, F = C * 9 / 5 + 32
    return 0;
}