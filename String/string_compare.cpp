#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str1[]="Abrar";
    char str2[]="Abrar";
    int flage=0;

    ///String compare;

    
    ///built in function;
    ///strcmp(str1,str2);
    

    ///without built in function;

    int i=0;

    while (str1[i]!='\0' && str2[i]!='\0')
    {
        ///compare
        if(str1[i]!=str2[i])
        {
            flage=1;
            break;
        }

        i++;
    }

    if (flage)
    {
        printf("Both strings are not same.");
    }

    else
    {
        printf("Both strings are same.");
    }


    return 0;
    


}