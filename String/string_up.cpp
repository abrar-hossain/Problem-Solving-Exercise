#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[]="abrar";

     ///built in function;
    ///strupr(str);

    

    
    
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    
    printf("%s",str);

    return 0; 


}

