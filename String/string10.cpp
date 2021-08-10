/*C program to reverse string in same variable, 
without using  another string variable to reverse.*/

#include <bits/stdc++.h>

using namespace std;

int stringLength(char text[])
{
    int len = 0, i;
    for (i = 0; text[i] != '\0'; i++)
        len++;
    return len;
}
int main()
{
    char str[100], tempChar;
    int i, length;

    printf("Enter any string: ");
    gets(str);

    //get string length
    length = stringLength(str);

    for (i = 0; i <= (length / 2); i++)
    {
        //swap elements
        tempChar = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = tempChar;
    }

    printf("Reverse string is: %s\n", str);
    return 0;
}