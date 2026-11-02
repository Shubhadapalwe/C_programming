#include <stdio.h>
#include <stdlib.h>

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main(void)
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD: ");
    if(scanf("%d", &iValue) != 1) return EXIT_FAILURE;
    iRet = DollarToINR(iValue);
    printf("Value in INR is %d\n", iRet);
    return EXIT_SUCCESS;
}
