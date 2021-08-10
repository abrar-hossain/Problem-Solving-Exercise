#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];

    printf("Enter any string: ");

    gets(str);

    printf("\nEntered string is: ");

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}