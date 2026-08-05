#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char s1[], char s2[])
{
    int freq[26] = {0};

    // Check if lengths are equal
    if(strlen(s1) != strlen(s2))
        return 0;

    // Count characters in first string
    for(int i = 0; s1[i] != '\0'; i++)
    {
        freq[toupper(s1[i]) - 'A']++;
    }

    // Subtract characters in second string
    for(int i = 0; s2[i] != '\0'; i++)
    {
        freq[toupper(s2[i]) - 'A']--;
    }

    // Check if all frequencies are zero
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(isAnagram(s1, s2))
        printf("The strings are Anagrams.");
    else
        printf("The strings are NOT Anagrams.");

    return 0;
}