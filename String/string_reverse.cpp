#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[]="Abrar Hossain";
    char rev[50];

    /// Built in function;
    ///strrev(str);

    int len=strlen(str); 

    ///printf("%d\n",len);

    ///without built in function;

    int i=len-1,j=0;

    while (str[i]>=0)
    {
        rev[j]=str[i];
        i--;
        j++;
    }

    rev[j]='\0';

    printf("The reverse string is = %s\n",rev);

    return 0;
    


}