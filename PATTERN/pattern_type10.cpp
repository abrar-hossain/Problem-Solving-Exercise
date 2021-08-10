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
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1

    */
     
    

    for (int row=1;row<=n;row++)   
    {
        for (int col=1;col<=n-row;col++)  ///print space;
        {
            printf("  ");  
        }

        for (int col=1;col<=row;col++)  ///print numbers;
        {
            printf(" %d",col);
        }
        for (int col=row-1;col>=1;col--)
        {
            printf(" %d",col);
        }

        printf("\n"); //new line;
        
    }


    return 0;
}