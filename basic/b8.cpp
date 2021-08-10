#include<bits/stdc++.h>
using namespace std;

int main()

{

    int Days,years,days,weeks;

    printf("Enter Days: ");
    scanf("%d",&Days);

    years=Days/365;
    weeks=(Days%365)/7;
    days=weeks%7;

    
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);




    return 0;
}