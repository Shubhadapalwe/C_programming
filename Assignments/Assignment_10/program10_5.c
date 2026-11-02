#include <stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main(void)
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    if (scanf("%d", &iValue) != 1) return 1;

    dRet = SquareMeter(iValue);
    printf("Area in square metres is %f\n", dRet);
    return 0;
}
