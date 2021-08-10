#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str1[50]="Abrar Hossain";
    char str2[]="Talukder Mashuk";


    ///concatenation;

    ///strcat(str1,str2);///built in function;

    int len=strlen(str1);
    

    ///without built in function;

    int i=0;

    while (str2[i]!='\0')
    {
        str1[len+i]=str2[i]; ///assign one by one;
        i++;
    }

    printf("source string = %s\n",str1);
    printf("string str2 = %s\n",str2);


    return 0;
    


}