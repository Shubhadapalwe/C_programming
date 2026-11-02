#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main(void)
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometres: ");
    if (scanf("%d", &iValue) != 1) return 1;

    iRet = KMtoMeter(iValue);
    printf("Distance in metres is %d\n", iRet);
    return 0;
}
