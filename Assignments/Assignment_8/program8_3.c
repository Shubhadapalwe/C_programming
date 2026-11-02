#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int iRet = 1;
    if (iNo < 0) iNo = -iNo;
    for (int iCnt = 2; iCnt <= iNo; iCnt++) iRet *= iCnt;
    return iRet;
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    printf("Factorial of number is %d\n", Factorial(iValue));
    return EXIT_SUCCESS;
}
