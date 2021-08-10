#include <bits/stdc++.h>
using namespace std;

int main()
{
    double base, expo;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &expo);

    printf("The answer is %lf\n", pow(base, expo));

    return 0;
}