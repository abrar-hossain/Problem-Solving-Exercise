/*C program to count upper case, lower case and special characters in a string.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    int upper = 0, lower = 0, countS = 0;
    char ch[100];

    printf("Enter the String:\n");
    gets(ch);

    for (i = 0; ch[i] != 0; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
        {
            if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                upper++;
            }
            else
            {
                lower++;
            }
        }

        else
        {
            countS++;
        }
    }
    printf("lowercase letters: %d", lower);
    printf("\nuppercase letters: %d", upper);
    printf("\nSpecial characters: %d\n", countS);

    return 0;
}