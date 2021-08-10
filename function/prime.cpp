#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mini, max, total = 0;

    printf("Enter minimum and maximum:");
    scanf("%d %d", &mini, &max);
    int numbers = mini;

    printf("Prime numbers from %d to %d \n", mini, max);

    while (numbers <= max)
    {
        int i = 2, count = 0;
        while (i <= numbers / 2)
        {
            if (numbers % i == 0)
            {
                count++;
                break;
            }

            i++;
        }
        if (count == 0 && numbers != 1)
        {
            total++;
            printf("%d ", numbers);
        }
        numbers++;
    }

    printf("\nTotal prime numbers are: %d", total);

    return 0;
}