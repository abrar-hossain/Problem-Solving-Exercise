#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[]="Abrar Hossain";

    int len=0;


    ///int len=strlen(str); /// Built in function;

    ///printf("%d\n",len);

    ///without built in function;

    int i=0;

    while (str[i]!='\0')
    {
        i++;
        ++len;
    }

    printf("%d\n",len);

    return 0;
    


}