#include <stdio.h>
#include <stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}
