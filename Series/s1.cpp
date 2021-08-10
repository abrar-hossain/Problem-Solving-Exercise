/*This program will print the sum of all natural numbers from 1 to N.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    unsigned long N, sum;

    /*read value of N*/
    printf("Enter a Positive number: ");
    scanf("%ld", &N);

    /*set sum by 0*/
    sum = 0;

    /*calculate sum of the series*/
    for (i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    /*print the sum*/

    printf("Sum of the series is: %ld\n", sum);

    return 0;
}