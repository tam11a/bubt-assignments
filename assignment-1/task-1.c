#include <stdio.h>
#include <math.h>

int main()
{
    // declaring variables
    int arrLength = 8;  // array length, defined in question
    int arr[arrLength]; // array of integer
    int total = 0;      // total summation of arr

    printf("Insert numbers: ");
    int i = 0, j;
    for (; i < arrLength; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    // get value of mean
    float mean = total / (float)arrLength;

    int temp;
    // sort the array
    for (i = 0; i < arrLength; i++)
    {
        for (j = 0; j < arrLength; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // if next value is smaller that the value, swap!!
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    float median = 0;
    // as the array length, 8 is even, median = (array[(n-1)/2] + array[n/2])/2.0;
    median = (arr[(arrLength - 1) / 2] + arr[arrLength / 2]) / 2.0;

    double sDeviation = 0;
    // calculate sample standard deviation
    for (i = 0; i < arrLength; i++)
    {
        sDeviation += pow(((double)arr[i]) - ((double)mean), 2);
    }

    // outputs
    printf("The mean is : %.3f\n", mean);
    printf("The median is : %g \n", median); // %g for remove trailing 0 from float type variable
    printf("The standard deviation is : %.13lf\n", sqrt(sDeviation / (arrLength - 1)));
    return 0;
}

/*
- Sample Input:

Insert numbers: 3 4 5 6 8 13 11 19

-  Sample Output:

The mean is : 8.625
The median is : 7
The standard deviation is : 5.4231646006473

*/