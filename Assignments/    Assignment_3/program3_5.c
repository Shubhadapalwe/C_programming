#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/* Return TRUE if the character is an English vowel. */
BOOL ChkVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' ||
        cValue == 'o' || cValue == 'u' || cValue == 'A' ||
        cValue == 'E' || cValue == 'I' || cValue == 'O' ||
        cValue == 'U')
        return TRUE;
    return FALSE;
}

int main(void)
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character\n");
    if (scanf(" %c", &cValue) != 1) return 1;
    bRet = ChkVowel(cValue);
    if (bRet == TRUE) printf("It is Vowel\n");
    else printf("It is not Vowel\n");
    return 0;
}
