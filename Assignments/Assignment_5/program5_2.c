#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
        printf("Invalid Year\n");
    else if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
}

int main(void)
{
    int year = 0;
    printf("Enter year: ");
    if (scanf("%d", &year) != 1) return EXIT_FAILURE;
    CheckLeapYear(year);
    return EXIT_SUCCESS;
}
