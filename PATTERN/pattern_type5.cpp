#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    printf("Enter Number = ");
    scanf("%d",&n);

    ///pattern print;

    
    /*
    1
    2 4
    3 6 9
    */

    for (int row=1;row <=n;row++)
    {
        for (int col=1;col<=row;col++)
        {
            printf(" %d ",col*row);
        }

        printf("\n"); //new line;
        
    }


    return 0;
    
}