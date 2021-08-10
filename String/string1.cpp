
///Number of vowels, consonants, words, digits and other;

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[] = "Abrar hossain9";

    int i, vowel, consonant, word, digit, others;

    vowel, consonant, word, digit, others = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }
        else if (str[i] >= 0 && str[i] <= 9)
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            word++;
        }
        else
        {
            others++;
        }
    }

    word++;

    printf("Number of Vowel = %d \n", vowel);
    printf("Number of Consonant = %d \n", consonant);
    printf("Number of Digit = %d \n", digit);
    printf("Number of Others= %d \n", others);
    printf("Number of Word = %d \n", word);
}
