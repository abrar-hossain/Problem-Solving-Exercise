#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    printf("Enter two angles of triangle: ");
    scanf("%d %d", &a, &b);

    printf("Third angle of the triangle = %d", 180 - (a + b));

    return 0;
}