#include <stdio.h>

/* Convert uppercase ASCII letters to lowercase and vice versa. */
void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
        printf("%c\n", cValue - ('a' - 'A'));
    else if (cValue >= 'A' && cValue <= 'Z')
        printf("%c\n", cValue + ('a' - 'A'));
    else
        printf("%c\n", cValue);
}

int main(void)
{
    char cValue = '\0';
    printf("Enter character\n");
    if (scanf(" %c", &cValue) != 1) return 1;
    DisplayConvert(cValue);
    return 0;
}
