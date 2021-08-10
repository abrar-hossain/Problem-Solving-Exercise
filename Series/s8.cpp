
// Sin x is a series of sin function of trigonometry; it can expand up to infinite number of term. Through this series, we can find out value of sin x at any radian value of sin x graph.

#include <bits/stdc++.h>

using namespace std;

int fac(int x)
{
    int i, fac = 1;
    for (i = 1; i <= x; i++)
        fac = fac * i;
    return fac;
}

int main()
{
    float x, Q, sum = 0;
    int i, j, limit;

    printf("Enter the value of x of sinx series: ");
    scanf("%f", &x);

    printf("Enter the limit upto which you want to expand the series: ");
    scanf("%d", &limit);

    Q = x;
    x = x * (3.1415 / 180);
    j = 1;

    for (i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + pow(x, j) / fac(j);
            j += 2;
        }
        else
        {
            sum = sum - pow(x, j) / fac(j);
            j += 2;
        }
    }

    printf("Sin(%0.1f): %f", Q, sum);
    return 0;
}
