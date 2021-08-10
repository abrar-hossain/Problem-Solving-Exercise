/*Given the series 1 -2+3-4+5-6+7-8 ... N terms, and we have to find the sum of all values using C program*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, sum;

    /*read value of N*/
    printf("Enter a number: ");
    scanf("%d", &N);

    /*set sum by 0*/
    sum = 0;

    /*calculate sum of the series*/
    for (i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }

    /*print the sum*/

    printf("Sum of the series is: %d\n", sum);

    return 0;
}