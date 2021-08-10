#include<bits/stdc++.h>
using namespace std;

int main()

{
    int press;

    float celsius, fahrenheit;

    printf("Press 1 celsius to fahrenheit and Press 2 fahrenheit to celcius.\n");

    scanf("%d",&press);

    if(press==1)
    {
        printf("Enter celsius: ");
        scanf("%f",&celsius);
        /* celsius to fahrenheit conversion formula */
        fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    }

    else
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        /* Fahrenheit to celsius conversion formula */
        celsius = (fahrenheit - 32) * 5 / 9;

        printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    }
    

    return 0;
}