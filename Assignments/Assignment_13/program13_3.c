#include <stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    long long iValue = iNo;
    if(iValue < 0) iValue = -iValue;
    do
    {
        int iDigit = (int)(iValue % 10);
        if(iDigit > 3 && iDigit < 7) iCount++;
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
    iRet = CountRange(iValue);
    printf("%d\n", iRet);
    return 0;
}
