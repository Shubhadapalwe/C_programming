#include <stdio.h>

/* Assignment 11 - Question 4: Sum even numbers in a positive range */
int RangeSumEven(int iStart, int iEnd)
{
    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd) { printf("Invalid range\n"); return 0; }
    int iSum = 0;
    for (int i = iStart; i <= iEnd; i++) if (i % 2 == 0) iSum += i;
    return iSum;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1) return 1;
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1) return 1;
    int iRet = RangeSumEven(iValue1, iValue2);
    if (iValue1 > 0 && iValue2 > 0 && iValue1 <= iValue2) printf("Addition is %d\n", iRet);
    return 0;
}
