#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str1[]="Abrar";
    char str2[]="Hossain";
    char temp[50];


    /*strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("the first string = %s\n",str1);
    printf("the first string = %s\n",str2);*/

    int len1=strlen(str1);
    int len2=strlen(str2);
    
    strcat(str1,str2);
    strcpy(str2,str1);

    int i=0;
    

    while (i<len1)
    {
        str1[i++]='\0';
    }

    i=len1;

    while (i<len1+len2)
    {
        str2[i]='\0';
        ++i;
    }
    

    printf("the first string = %s\n",str1);
    printf("the first string = %s\n",str2);


    
    

    return 0;
    


}