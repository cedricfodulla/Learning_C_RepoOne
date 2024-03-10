// This porgram identifies whether an input character is a vowel or a consonant

#include <stdio.h>

int main()
{
    char alphabet;
    printf("Enter an alphabet character: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("\nYou entered a vowel.");
        break;
    case 'e':
        printf("\nYou entered a vowel.");
        break;
    case 'i':
        printf("\nYou entered a vowel.");
        break;
    case 'o':
        printf("\nYou entered a vowel.");
        break;
    case 'u':
        printf("\nYou entered a vowel.");
        break;
    default:
        printf("\nYou entered a consonant.");
        break;
        return 0;
    }
}