#include <bits/stdc++.h>

/*C program to toggle case of all characters of string.*/
using namespace std;

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    printf("Entered string is: %s\n", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
            else
                str[i] = str[i] - 32;
        }
    }

    printf("String after toggle case: %s\n", str);

    return 0;
}