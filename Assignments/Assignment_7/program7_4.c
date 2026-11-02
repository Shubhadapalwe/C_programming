#include <stdio.h>
#include <stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    OddDisplay(iValue);
    return EXIT_SUCCESS;
}
