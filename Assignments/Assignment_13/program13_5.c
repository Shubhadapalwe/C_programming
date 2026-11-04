#include <stdio.h>

int CountDiff(int iNo)
{
    int iEvenSum = 0, iOddSum = 0;
    long long iValue = iNo;
    if(iValue < 0) iValue = -iValue;
    do
    {
        int iDigit = (int)(iValue % 10);
        if(iDigit % 2 == 0) iEvenSum += iDigit;
        else iOddSum += iDigit;
        iValue /= 10;
    } while(iValue != 0);
    return iEvenSum - iOddSum;
}

int main(void)
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    if(scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    iRet = CountDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}
