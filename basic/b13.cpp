#include <bits/stdc++.h>
using namespace std;

int main()
{
    float side, area;

    printf("Enter side of an equilateral triangle: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * (side * side);

    /* Print resultant area */
    printf("Area of equilateral triangle = %.2f sq. units", area);

    return 0;
}