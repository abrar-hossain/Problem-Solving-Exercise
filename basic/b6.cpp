#include<bits/stdc++.h>
using namespace std;

int main()

{

    float cm;
    
    double meter, km;

    printf("Enter centimeter: ");
    scanf("%f",&cm);

    meter = cm / 100.0;
    km    = cm / 100000.0;
    
    printf("Length in Meter = %.2llf m \n", meter);
    printf("Length in Kilometer = %llf km", km);




    return 0;
}