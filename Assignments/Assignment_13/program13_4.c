#include <stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    long long iValue = iNo;
    if(iValue < 0) iValue = -iValue;
    do
    {
        iMult *= (int)(iValue % 10);
        iValue /= 10;
    } while(iValue != 0);
    return iMult;
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
    iRet = MultDigits(iValue);
    printf("%d\n", iRet);
    return 0;
}
