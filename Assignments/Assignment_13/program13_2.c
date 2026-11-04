#include <stdio.h>

int CountOdd(int iNo)
{
    int iCount = 0;
    long long iValue = iNo;
    if(iValue < 0) iValue = -iValue;
    do
    {
        if((iValue % 10) % 2 != 0) iCount++;
        iValue /= 10;
    } while(iValue != 0);
    return iCount;
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
    iRet = CountOdd(iValue);
    printf("%d\n", iRet);
    return 0;
}
