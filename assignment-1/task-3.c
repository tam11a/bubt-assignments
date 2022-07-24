#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    temp = a; // store the value of 'a' in a temporary variable
    a = b; // assign value from b to a
    b = temp; // assign value from temporary variable to 'b'
    printf("After swapping, a: %d and b: %d\n",a,b);
    return 0;
}