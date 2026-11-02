#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
{
    if (iNo < 0) iNo = -iNo;
    for (int iCnt = 10; iCnt >= 1; iCnt--) printf("%d ", iNo * iCnt);
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    TableRev(iValue);
    return EXIT_SUCCESS;
}
