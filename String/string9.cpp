///C programe to print all VOWEL and CONSONANT characters separately.

#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[100];
    int i;

    printf("Enter any string: ");
    gets(str);

    printf("VOWEL Characters are: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            printf("%c", str[i]);
        }
    }

    printf("\nCONSONANT Characters are: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u'))
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}