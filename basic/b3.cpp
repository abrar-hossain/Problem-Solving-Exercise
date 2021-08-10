#include<bits/stdc++.h>

using namespace std;

int main()

{

    float length,width;
    
    double perimeter;

    printf("Enter length and width: ");
    scanf("%f %f",&length,&width);

    perimeter = 2 * (length + width);

    
    printf("Perimeter of rectangle = %llf units ", perimeter);



    return 0;
}