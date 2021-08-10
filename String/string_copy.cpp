#include<bits/stdc++.h>

using namespace std;

int main()
{
    char source[]="Abrar Hosain";
    char target[20];


    ///copy from one string to another;

    ///strncpy(target,source);///built in function;

    int i=0;

    while (source[i]!='\0')
    {
        target[i]=source[i]; ///copy one by one;
        i++;
    }

    printf("source string = %s\n",source);

    printf("Target string = %s\n",target);


    return 0;
    


}