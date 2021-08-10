#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[100];

    printf("Enter any string: ");
    gets(str);

    printf("And Here is the patteern.\n");

    int len = strlen(str);
    printf("%d\n", len);

    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }

        printf("\n");
    }

    return 0;
}