#include <stdio.h>

/* Assignment 14 - Program 5: Difference: sum of factors minus sum of non-factors */
int FactDiff(int iNo)
{
    int factorSum = 0, nonFactorSum = 0;
    if (iNo < 0) iNo = -iNo;
    for (int i = 1; i < iNo; i++) {
        if (iNo % i == 0) factorSum += i;
        else nonFactorSum += i;
    }
    return factorSum - nonFactorSum;
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("%d\n", FactDiff(iValue));
    return 0;
}
