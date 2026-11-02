#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0) iNo = -iNo;
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        if(iFact > INT_MAX / iCnt) return 0; /* overflow */
        iFact *= iCnt;
    }
    return iFact;
}

int main(void)
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is %d\n", iRet);
    return EXIT_SUCCESS;
}
