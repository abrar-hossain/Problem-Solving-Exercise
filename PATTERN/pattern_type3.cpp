#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    printf("Enter Number = ");
    scanf("%d",&n);

    ///pattern print;

    /*
     
     1 2 3
       1 2
         1

    */
     
    

    for (int row=n;row>=1;row--)   
    {
        for (int col=1;col<=n-row;col++)  ///print space;
        {
            printf("  ");  
        }

        for (int col=1;col<=row;col++)  ///print numbers;
        {
            printf(" %d",col);
        }

        printf("\n"); //new line;
        
    }


    return 0;
}