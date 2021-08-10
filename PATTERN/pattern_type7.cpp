#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    printf("Enter Number = ");
    scanf("%d",&n);

    ///Pyramid print;

    
    /*

   *****
    ***
     *
    
    */

    for (int row=n;row>=1;row--)   
    {
        for (int col=1;col<=n-row;col++)  ///print space;
        {
            printf("  ");  
        }

        for (int col=1;col<=(2*row)-1;col++)  ///print numbers;
        {
            printf(" *");
        }

        printf("\n"); //new line;
        
    }


    return 0;
    
}