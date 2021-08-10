#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[]="ABRAR";

     ///built in function;
    ///strlwr(str);

    

    
    
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    
    printf("%s",str);

    return 0; 


}
