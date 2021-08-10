#include <bits/stdc++.h>

using namespace std;

int main()
{
    int start, end, rem, rev_no, temp, total = 0;

    printf("Enter start and end:");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers from %d to %d \n", start, end);
    for (int n = start; n <= end; n++)
    {
        temp = n;
        rev_no = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            rev_no = rev_no * 10 + rem;
            temp = temp / 10;
        }
        if (n == rev_no)
        {
            printf("%d ", n);
            total++;
        }
    }
    printf("Total palindrome numbers are: %d", total);

    return 0;
}