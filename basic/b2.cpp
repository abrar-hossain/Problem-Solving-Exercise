#include<bits/stdc++.h>

using namespace std;

int main()

{

    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    div= (float) num1/num2;

    printf("SUM = %d\n", num1+num2);
    printf("DIFFERENCE = %d\n", num1-num2);
    printf("PRODUCT = %d\n", num1*num2);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", num1%num2);



    return 0;
}