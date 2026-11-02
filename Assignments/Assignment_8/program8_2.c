#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    const char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (iNo < 0) iNo = -iNo;
    if (iNo <= 9) printf("%s\n", words[iNo]);
    else printf("Invalid Number\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    Display(iValue);
    return EXIT_SUCCESS;
}
