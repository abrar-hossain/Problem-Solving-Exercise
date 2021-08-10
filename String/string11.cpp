/*C program to find occurrence of a character in the string.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];
    int i, count;
    char ch;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    count = 0; //set counter with 0
    //start counting occurrence
    for (i = 0; str[i] != '\0'; i++)
    {
        //compare character with string character
        if (str[i] == ch)
            count++;
    }

    if (count)
        printf("%c is found %d times in the string %s\n", ch, count, str);
    else
        printf("%c is not found in the string %s\n", ch, str);

    return 0;
}