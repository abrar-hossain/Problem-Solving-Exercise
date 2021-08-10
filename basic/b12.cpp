#include <bits/stdc++.h>
using namespace std;

int main()
{
    float base, height, area;

    printf("Enter base  and height of the triangle: ");
    scanf("%f %f", &base, &height);

    printf("Area of the triangle = %.2f sq. units", (base * height) / 2);

    return 0;
}