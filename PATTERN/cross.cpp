#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    printf("Enter Number = ");
    scanf("%d",&n);

    ///Pyramid print;

    
    /*

   *       *
     *   *
       *
     *   *
   *       *
 
    */

    for (int row=1;row<=n;row++)   
    {

        for (int col=1;col<=n;col++) 
        {
            if(col+row==6 || col==row)
            printf("*");

            else
            {
                printf(" ");
            }
        }

        printf("\n"); //new line;
        
    }


    return 0;
    
}