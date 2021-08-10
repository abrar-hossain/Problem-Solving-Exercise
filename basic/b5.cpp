#include<bits/stdc++.h>
using namespace std;

int main()

{

    float radius;
    
    double area,diameter, circumference;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    
    printf("Diameter of circle = %.2llf units \n", diameter);
    printf("Circumference of circle = %.2llf units \n", circumference);
    printf("Area of circle = %.2llf sq. units ", area);




    return 0;
}