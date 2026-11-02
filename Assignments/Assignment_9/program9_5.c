#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEven = 1, iOdd = 1;
    if(iNo < 0) iNo = -iNo;
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        if(iEven > INT_MAX / iCnt) return 0; /* overflow */
        iEven *= iCnt;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        if(iOdd > INT_MAX / iCnt) return 0; /* overflow */
        iOdd *= iCnt;
    }
    return iEven - iOdd;
}

int main(void)
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d\n", iRet);
    return EXIT_SUCCESS;
}
