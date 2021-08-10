#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    printf("String is: %s\n", str);

    for (int i = 0; i < strlen(str); i++)
    {

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            //check for vowels
            if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
            {
                str[i] = '*';
            }
            else
            {
                //otherwise alphabet is consonant
                str[i] = '#';
            }
        }
    }

    printf("Replaced string is: %s\n", str);

    return 0;
}